/*
 * input_reading.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "main.h"
// we aim to work with more than one buttons
#define N0_OF_BUTTONS 3
// timer interrupt duration is 10 ms , so to pass 1 second ,
// we need to jump to the interrupt service routine 100 time
#define DURATION_FOR_AUTO_INCREASING	100
#define BUTTON_IS_PRESSED 				GPIO_PIN_RESET
#define BUTTON_IS_RELEASED 				GPIO_PIN_SET
// the buffer that the final result is stored after debouncing
static GPIO_PinState buttonBuffer[N0_OF_BUTTONS] = {BUTTON_IS_RELEASED, BUTTON_IS_RELEASED, BUTTON_IS_RELEASED};
// we define two buffers for debouncing
static GPIO_PinState debounceButtonBuffer1[N0_OF_BUTTONS] = {BUTTON_IS_RELEASED, BUTTON_IS_RELEASED, BUTTON_IS_RELEASED};
static GPIO_PinState debounceButtonBuffer2[N0_OF_BUTTONS] = {BUTTON_IS_RELEASED, BUTTON_IS_RELEASED, BUTTON_IS_RELEASED};
static GPIO_PinState debounceButtonBuffer3[N0_OF_BUTTONS] = {BUTTON_IS_RELEASED, BUTTON_IS_RELEASED, BUTTON_IS_RELEASED};
// we define a flag for a button pressed more than 1 second .
static uint8_t flagForButtonPress1s[N0_OF_BUTTONS] = {0, 0 ,0};
// we define counter for automatically increasing the value
// after the button is pressed more than 1 second .
static uint16_t counterForButtonPress1s [N0_OF_BUTTONS] = {DURATION_FOR_AUTO_INCREASING, DURATION_FOR_AUTO_INCREASING, DURATION_FOR_AUTO_INCREASING};
void button_reading (void) {
	for (char i = 0; i < N0_OF_BUTTONS; i++) {
		debounceButtonBuffer2[i] = debounceButtonBuffer1[i];
		if (i == 0) {
			debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin );
		}
		if (i == 1) {
			debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin );
		}
		if (i == 2) {
			debounceButtonBuffer1[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin );
		}
		if (debounceButtonBuffer1[i] == debounceButtonBuffer2[i]){
			if (debounceButtonBuffer2[i] != debounceButtonBuffer3[i]){
				debounceButtonBuffer3[i] = debounceButtonBuffer2[i];
				if (debounceButtonBuffer3[i] = BUTTON_IS_PRESSED){
					buttonBuffer[i] = BUTTON_IS_PRESSED;
					counterForButtonPress1s[i] = DURATION_FOR_AUTO_INCREASING;
				}
			}
			else {
				counterForButtonPress1s[i]--;
				if (counterForButtonPress1s[i] == 0){
					if (debounceButtonBuffer3[i] == BUTTON_IS_PRESSED){
						counterForButtonPress1s[i]= DURATION_FOR_AUTO_INCREASING;
						buttonBuffer[i] = BUTTON_IS_RELEASED;
						flagForButtonPress1s[i] = 1;
					}
					if (debounceButtonBuffer3[i] == BUTTON_IS_RELEASED){
						counterForButtonPress1s[i] = DURATION_FOR_AUTO_INCREASING;
						flagForButtonPress1s[i] = 0;
					}
				}
			}
		}
	}
}

unsigned char is_button_pressed (uint8_t index) {
	if( index >= N0_OF_BUTTONS ) return 0;
	GPIO_PinState new = buttonBuffer[index];
	buttonBuffer [ index ] = BUTTON_IS_RELEASED ;
	return ( new == BUTTON_IS_PRESSED ) ;
}
unsigned char is_button_pressed_1s (unsigned char index) {
	if( index >= N0_OF_BUTTONS ) return 0xff ;
	uint8_t new = flagForButtonPress1s[index];
	flagForButtonPress1s[index] = 0;
	return ( new == 1) ;
}
