/*
 * mode_2.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "mode_2.h"

void runMode2(){
	if (status == M2){
		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(2);

		if (timer3_flag == 1){
			HAL_GPIO_TogglePin(RED_1_GPIO_Port, RED_1_Pin);
			HAL_GPIO_TogglePin(RED_2_GPIO_Port, RED_2_Pin);

			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);
			setTimer3(250);
		}

		if (timer1_flag == 1){
			count1--;
			setTimer1(1000);
		}

		if (is_button_pressed(0) || timer2_flag == 1){
			status = M3;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}

		if (is_button_pressed(1) || is_button_pressed_1s(1)){
			count2++;
		}
		if (is_button_pressed(2)){
			count1 = count2;
			setTimer2(count2*1000);
			count2 = 0;
		}
	}
}
