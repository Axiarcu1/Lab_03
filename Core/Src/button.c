/*
 * button.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */
#include "button.h"

int reg0[NUMBER_OF_BUTTONS] = {BUTTON_IS_PRESSED};
int reg1[NUMBER_OF_BUTTONS] = {BUTTON_IS_PRESSED};
int reg2[NUMBER_OF_BUTTONS] = {BUTTON_IS_PRESSED};
int reg3[NUMBER_OF_BUTTONS] = {BUTTON_IS_PRESSED};

int button_flag[NUMBER_OF_BUTTONS] = {0};
int button_flag_1s[NUMBER_OF_BUTTONS] = {0};

int TimeOutForKeyPress[NUMBER_OF_BUTTONS] = {0};

int isButtonPressed(int index){
	if (button_flag[index] == 1) {
		button_flag[index] = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess(int index){
	button_flag[index] = 1;
}

void getInput() {
	for (int i = 0; i < NUMBER_OF_BUTTONS; i++) {
		reg0[i] = reg1[i];
		reg1[i] = reg2[i];

		if (i == 0) {
			reg2[i] = HAL_GPIO_ReadPin(BUTTON_1_GPIO_Port, BUTTON_1_Pin);
		}
		else if (i == 1) {
			reg2[i] = HAL_GPIO_ReadPin(BUTTON_2_GPIO_Port, BUTTON_2_Pin);
		}
		else if (i == 2) {
			reg2[i] = HAL_GPIO_ReadPin(BUTTON_3_GPIO_Port, BUTTON_3_Pin);
		}

		if ((reg1[i] == reg0[i]) && (reg1[i] == reg2[i])){
			if (reg3[i] != reg2[i]){
				reg3[i] = reg2[i];
				if (reg2[i] == BUTTON_IS_RELEASED){
					subKeyProcess(i);
					if (button_flag_1s[i] == 0) {
						TimeOutForKeyPress[i] = 2000 / TIMER_CYCLE;
					}
					else {
						TimeOutForKeyPress[i] = 250 / TIMER_CYCLE;
					}
				}
			} else {
				TimeOutForKeyPress[i]--;
				if (TimeOutForKeyPress[i] == 0){
					reg3[i] = BUTTON_IS_PRESSED;
					button_flag_1s[i] = 1;
				}
			}
		}
		else {
			button_flag_1s[i] = 0;
		}
	}
}
