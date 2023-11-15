/*
 * mode_3.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */
#include "mode_3.h"
void runMode3(){	//mode 3
	if (status == M3){
		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(3);

		if (timer3_flag == 1){	//set for YELLOW led blinking 2Hz
			HAL_GPIO_TogglePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin);
			HAL_GPIO_TogglePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin);

			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
			setTimer3(250);
		}

		if (timer1_flag == 1){	//count1 decreases every second
			count1--;
			setTimer1(1000);
		}

		if (is_button_pressed(0) || timer2_flag == 1){	//switch to mode 4 when button 1 is pressed or timer interrupt 2
			status = M4;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}

		if (is_button_pressed(1) || is_button_pressed_1s(1)){	//set value when button 3 is pressed
			if (red_timer + count2 + green_timer <= 99){	//red + yellow + green time not exceed 99
				count2++;
			}
		}
		if (is_button_pressed(2)){	//set value when button 3 is pressed
			count1 = count2;
			yellow_timer = count2;
			setTimer2(count2*1000);
			count2 = 0;
		}
	}
}
