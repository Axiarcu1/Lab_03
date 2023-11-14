/*
 * mode_1.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "mode_1.h"

void runMode1(){
	switch(status){
	case INIT:
		count1 = 30;
		count2 = 25;
		status = M1_RED_GREEN;
		setTimer1(1000);
		setTimer2(25000);
		break;
	case M1_RED_GREEN:
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, SET);

		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(1);


		if (timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if (timer2_flag == 1){
			status = M1_RED_YELLOW;
			count1 = 5;
			count2 = 5;
			setTimer1(1000);
			setTimer2(5000);
		}

		if (is_button_pressed(0)){
			status = M2;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}
		break;
	case M1_RED_YELLOW:
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, SET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, SET);
		HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);

		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(1);

		if (timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if (timer2_flag == 1){
			status = M1_GREEN_RED;
			count1 = 25;
			count2 = 30;
			setTimer1(1000);
			setTimer2(25000);
		}

		if (is_button_pressed(0)){
			status = M2;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}
		break;
	case M1_GREEN_RED:
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, SET);
		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);

		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(1);

		if (timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if (timer2_flag == 1){
			status = M1_YELLOW_RED;
			count1 = 5;
			count2 = 5;
			setTimer1(1000);
			setTimer2(5000);
		}

		if (is_button_pressed(0)){
			status = M2;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}
		break;
	case M1_YELLOW_RED:
		HAL_GPIO_WritePin(RED_1_GPIO_Port, RED_1_Pin, RESET);
		HAL_GPIO_WritePin(YELLOW_1_GPIO_Port, YELLOW_1_Pin, SET);
		HAL_GPIO_WritePin(GREEN_1_GPIO_Port, GREEN_1_Pin, RESET);
		HAL_GPIO_WritePin(RED_2_GPIO_Port, RED_2_Pin, SET);
		HAL_GPIO_WritePin(YELLOW_2_GPIO_Port, YELLOW_2_Pin, RESET);
		HAL_GPIO_WritePin(GREEN_2_GPIO_Port, GREEN_2_Pin, RESET);

		display7SEG_1(count1);
		display7SEG_2(count2);
		display7SEG_mode(1);

		if (timer1_flag == 1){
			setTimer1(1000);
			count1--;
			count2--;
		}

		if (timer2_flag == 1){
			status = M1_RED_GREEN;
			count1 = 30;
			count2 = 25;
			setTimer1(1000);
			setTimer2(25000);
		}

		if (is_button_pressed(0)){
			status = M2;
			count1 = 20;
			count2 = 0;
			setTimer1(1000);
			setTimer2(25000);
			setTimer3(250);
		}
		break;
	default:
		break;
	}
}
