/*
 * mode_4.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "mode_4.h"

void runMode4(){	//mode 4
	if (status == M4){
		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(4);

		if (timer3_flag == 1){	//set for GREEN led blinking 2Hz
			HAL_GPIO_TogglePin(GREEN_1_GPIO_Port, GREEN_1_Pin);
			HAL_GPIO_TogglePin(GREEN_2_GPIO_Port, GREEN_2_Pin);

			HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
			HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
			HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
			HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
			setTimer3(250);
		}

		if (timer1_flag == 1){	//count1 decreases every second
			count1--;
			setTimer1(1000);
		}

		if (is_button_pressed(0) || timer2_flag == 1){	//switch to mode 1 INIT when button 1 is pressed or timer interrupt 2
			status = INIT;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}

		if (is_button_pressed(1) || is_button_pressed_1s(1)){	//set value when button 3 is pressed
			if (red_timer + yellow_timer + count2 <= 99){	//red + yellow + green time not exceed 99
				count2++;
			}
		}
		if (is_button_pressed(2)){	//set value when button 3 is pressed
			count1 = count2;
			green_timer = count2;
			if (red_timer > yellow_timer + green_timer){	//make sure red time equals to yellow + green time, compensate when red time longer or shorter than yellow + green time
				green_timer += red_timer - (yellow_timer + green_timer);
			}
			else if (red_timer < yellow_timer + green_timer){
				red_timer += (yellow_timer + green_timer) - red_timer;
			}
			setTimer2(count2*1000);
			count2 = 0;
		}
	}
}
