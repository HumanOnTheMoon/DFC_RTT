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
	
	return RT_EOK;
}


