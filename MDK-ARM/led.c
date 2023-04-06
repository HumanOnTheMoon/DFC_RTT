#include "led.h"

void LED_Init(void)
{
	__HAL_RCC_GPIOB_CLK_ENABLE();           //开启GPIOB时钟
	GPIO_InitTypeDef GPIO_Initure;
  GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1; //PB1,0
  GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;  //推挽输出
  GPIO_Initure.Pull=GPIO_PULLUP;          //上拉
  GPIO_Initure.Speed=GPIO_SPEED_HIGH;     //高速
  HAL_GPIO_Init(GPIOB,&GPIO_Initure);
	//LED 初始化完成后关闭所有灯
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);
}

void led0_entry(void *parameter)
{   
    while(1)
    {
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_RESET);
      rt_thread_mdelay(1000);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_1,GPIO_PIN_SET);
      rt_thread_mdelay(1000);
    }
}

 void led1_entry(void *parameter)
{   
    while(1)
    {
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_SET);
      rt_thread_mdelay(1000);
			HAL_GPIO_WritePin(GPIOB,GPIO_PIN_0,GPIO_PIN_RESET);
      rt_thread_mdelay(1000);
    }
}
