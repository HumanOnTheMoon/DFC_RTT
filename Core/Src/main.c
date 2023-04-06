#include "main.h"

//LED�߳̿��ƿ顢ջ����
rt_err_t led0, led1;												//��̬�̷߳���ֵ
struct rt_thread led0_thread, led1_thread;	//�߳̿��ƿ�
rt_uint8_t led0_stack[100], led1_stack[100];//led��̬�̶߳Ѵ�С

int main(void)
{
	LED_Init();			//LED��GPIO�ڳ�ʼ��
	USART1_Init();	//����USART1��ʼ��
	I2C2_Init();		//Ӳ��IIC��ʼ��
	SPI1_Init();		//SPI��ʼ��
	
	
	//LED0��˸�߳�
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
	//LED1��˸�߳�
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


