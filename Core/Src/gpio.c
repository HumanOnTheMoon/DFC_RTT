/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    gpio.c
  * @brief   This file provides code for the configuration
  *          of all used GPIO pins.
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

/* Includes ------------------------------------------------------------------*/
#include "gpio.h"

/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/*----------------------------------------------------------------------------*/
/* Configure GPIO                                                             */
/*----------------------------------------------------------------------------*/
/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/** Configure pins as
        * Analog
        * Input
        * Output
        * EVENT_OUT
        * EXTI
*/
void MX_GPIO_Init(void)
{
//	__HAL_RCC_GPIOB_CLK_ENABLE();           //开启GPIOB时钟
//	GPIO_InitTypeDef GPIO_Initure;
//  GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1; //PB1,0
//  GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;  //推挽输出
//  GPIO_Initure.Pull=GPIO_PULLUP;          //上拉
//  GPIO_Initure.Speed=GPIO_SPEED_HIGH;     //高速
//  HAL_GPIO_Init(GPIOB,&GPIO_Initure);
}

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */
