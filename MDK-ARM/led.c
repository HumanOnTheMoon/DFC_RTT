#include "led.h"

void LED_Init(void)
{
	__HAL_RCC_GPIOB_CLK_ENABLE();           //����GPIOBʱ��
	GPIO_InitTypeDef GPIO_Initure;
  GPIO_Initure.Pin=GPIO_PIN_0|GPIO_PIN_1; //PB1,0
  GPIO_Initure.Mode=GPIO_MODE_OUTPUT_PP;  //�������
  GPIO_Initure.Pull=GPIO_PULLUP;          //����
  GPIO_Initure.Speed=GPIO_SPEED_HIGH;     //����
  HAL_GPIO_Init(GPIOB,&GPIO_Initure);
	//LED ��ʼ����ɺ�ر����е�
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
