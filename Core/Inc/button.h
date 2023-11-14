/*
 * button.h
 *
 *  Created on: Nov 13, 2023
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "timer.h"

#define BUTTON_IS_PRESSED SET
#define BUTTON_IS_RELEASED RESET

#define NUMBER_OF_BUTTONS 3

int isButtonPressed(int index);

void getInput();

#endif /* INC_BUTTON_H_ */
