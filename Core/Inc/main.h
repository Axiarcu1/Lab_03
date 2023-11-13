/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RED_1_Pin GPIO_PIN_1
#define RED_1_GPIO_Port GPIOA
#define YELLOW_1_Pin GPIO_PIN_2
#define YELLOW_1_GPIO_Port GPIOA
#define GREEN_1_Pin GPIO_PIN_3
#define GREEN_1_GPIO_Port GPIOA
#define RED_2_Pin GPIO_PIN_4
#define RED_2_GPIO_Port GPIOA
#define YELLOW_2_Pin GPIO_PIN_5
#define YELLOW_2_GPIO_Port GPIOA
#define GREEN_2_Pin GPIO_PIN_6
#define GREEN_2_GPIO_Port GPIOA
#define BUTTON_1_Pin GPIO_PIN_7
#define BUTTON_1_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_0
#define A1_GPIO_Port GPIOB
#define B1_Pin GPIO_PIN_1
#define B1_GPIO_Port GPIOB
#define C1_Pin GPIO_PIN_2
#define C1_GPIO_Port GPIOB
#define C3_Pin GPIO_PIN_10
#define C3_GPIO_Port GPIOB
#define D3_Pin GPIO_PIN_11
#define D3_GPIO_Port GPIOB
#define A4_Pin GPIO_PIN_12
#define A4_GPIO_Port GPIOB
#define B4_Pin GPIO_PIN_13
#define B4_GPIO_Port GPIOB
#define C4_Pin GPIO_PIN_14
#define C4_GPIO_Port GPIOB
#define D4_Pin GPIO_PIN_15
#define D4_GPIO_Port GPIOB
#define BUTTON_2_Pin GPIO_PIN_8
#define BUTTON_2_GPIO_Port GPIOA
#define BUTTON_3_Pin GPIO_PIN_9
#define BUTTON_3_GPIO_Port GPIOA
#define MODE_A_Pin GPIO_PIN_11
#define MODE_A_GPIO_Port GPIOA
#define MODE_B_Pin GPIO_PIN_12
#define MODE_B_GPIO_Port GPIOA
#define MODE_C_Pin GPIO_PIN_13
#define MODE_C_GPIO_Port GPIOA
#define MODE_D_Pin GPIO_PIN_14
#define MODE_D_GPIO_Port GPIOA
#define D1_Pin GPIO_PIN_3
#define D1_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_4
#define A2_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_5
#define B2_GPIO_Port GPIOB
#define C2_Pin GPIO_PIN_6
#define C2_GPIO_Port GPIOB
#define D2_Pin GPIO_PIN_7
#define D2_GPIO_Port GPIOB
#define A3_Pin GPIO_PIN_8
#define A3_GPIO_Port GPIOB
#define B3_Pin GPIO_PIN_9
#define B3_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
