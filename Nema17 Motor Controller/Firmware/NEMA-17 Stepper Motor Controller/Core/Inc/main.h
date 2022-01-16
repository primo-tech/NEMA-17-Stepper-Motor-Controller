/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32l0xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Driver_Fault_Pin GPIO_PIN_9
#define Driver_Fault_GPIO_Port GPIOB
#define Driver_Fault_EXTI_IRQn EXTI4_15_IRQn
#define A_Pin GPIO_PIN_0
#define A_GPIO_Port GPIOA
#define A_EXTI_IRQn EXTI0_1_IRQn
#define B_Pin GPIO_PIN_1
#define B_GPIO_Port GPIOA
#define B_EXTI_IRQn EXTI0_1_IRQn
#define Control_LED_Pin GPIO_PIN_4
#define Control_LED_GPIO_Port GPIOA
#define Motor_Step_Pin GPIO_PIN_5
#define Motor_Step_GPIO_Port GPIOA
#define Motor_Direction_Pin GPIO_PIN_6
#define Motor_Direction_GPIO_Port GPIOA
#define Motor_Enable_Pin GPIO_PIN_7
#define Motor_Enable_GPIO_Port GPIOA
#define Signal_Blue_Pin GPIO_PIN_1
#define Signal_Blue_GPIO_Port GPIOB
#define Signal_Red_Pin GPIO_PIN_9
#define Signal_Red_GPIO_Port GPIOA
#define Signal_Green_Pin GPIO_PIN_10
#define Signal_Green_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
