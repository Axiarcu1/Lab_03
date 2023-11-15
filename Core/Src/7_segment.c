/*
 * 7_segment.c
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#include "main.h"
#include "7_segment.h"

void display7SEG_1 (int counter){	//display counter for traffic led group 1
	int digit_1 = counter/10;
	int digit_2 = counter%10;

	if (digit_1 == 0){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 1){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 2){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 3){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 4){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 5){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 6){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 7){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
	}
	else if (digit_1 == 8){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
	}
	else if (digit_1 == 9){
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
	}

	if (digit_2 == 0){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 1){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 2){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 3){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 4){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 5){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 6){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 7){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
	}
	else if (digit_2 == 8){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	}
	else if (digit_2 == 9){
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
		HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
		HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
	}
}

void display7SEG_2 (int counter){	//display counter for traffic led group 2
	int digit_1 = counter/10;
	int digit_2 = counter%10;

	if (digit_1 == 0){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 1){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 2){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 3){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 4){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 5){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 6){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 7){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
	}
	else if (digit_1 == 8){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
	}
	else if (digit_1 == 9){
		HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
	}

	if (digit_2 == 0){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, RESET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, RESET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 1){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, SET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, RESET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 2){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, RESET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, SET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 3){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, SET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, SET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 4){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, RESET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, RESET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, SET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 5){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, SET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, RESET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, SET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 6){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, RESET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, SET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, SET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 7){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, SET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, SET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, SET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, RESET);
	}
	else if (digit_2 == 8){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, RESET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, RESET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	}
	else if (digit_2 == 9){
		HAL_GPIO_WritePin(A4_GPIO_Port, A4_Pin, SET);
		HAL_GPIO_WritePin(B4_GPIO_Port, B4_Pin, RESET);
		HAL_GPIO_WritePin(C4_GPIO_Port, C4_Pin, RESET);
		HAL_GPIO_WritePin(D4_GPIO_Port, D4_Pin, SET);
	}
}

void display7SEG_mode (int counter){	//display mode
	if (counter == 1){
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, SET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
	}
	else if (counter == 2){
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, SET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
	}
	else if (counter == 3){
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, SET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, SET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, RESET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
	}
	else if (counter == 4){
		HAL_GPIO_WritePin(MODE_A_GPIO_Port, MODE_A_Pin, RESET);
		HAL_GPIO_WritePin(MODE_B_GPIO_Port, MODE_B_Pin, RESET);
		HAL_GPIO_WritePin(MODE_C_GPIO_Port, MODE_C_Pin, SET);
		HAL_GPIO_WritePin(MODE_D_GPIO_Port, MODE_D_Pin, RESET);
	}
}
