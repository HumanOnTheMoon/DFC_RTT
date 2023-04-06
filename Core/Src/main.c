#include "main.h"

//LED线程控制块、栈创建
rt_err_t led0, led1;												//静态线程返回值
struct rt_thread led0_thread, led1_thread;	//线程控制块
rt_uint8_t led0_stack[100], led1_stack[100];//led静态线程堆大小

int main(void)
{
	LED_Init();			//LED灯GPIO口初始化
	USART1_Init();	//串口USART1初始化
	I2C2_Init();		//硬件IIC初始化
	SPI1_Init();		//SPI初始化
	
	
	//LED0闪烁线程
	led0 = rt_thread_init(&led0_thread,
												"led0",
												led0_entry,
												RT_NULL,
												&led0_stack[0],
												sizeof(led0_stack),
												RT_THREAD_PRIORITY_MAX / 2,
												20
												);
	if(led0 == RT_EOK)
	{
		rt_thread_startup(&led0_thread);
	}
	//LED1闪烁线程
	led1 = rt_thread_init(&led1_thread,
												"led1",
												led1_entry,
												RT_NULL,
												&led1_stack[0],
												sizeof(led1_stack),
												RT_THREAD_PRIORITY_MAX / 2,
												20
												);
	if(led1 == RT_EOK)
	{
		rt_thread_startup(&led1_thread);
	}
	
	return RT_EOK;
}


