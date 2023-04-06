#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"
#define USART1_BAUDRATE 115200;
	
extern UART_HandleTypeDef huart1;
void USART1_Init(void);

#ifdef __cplusplus
}
#endif

#endif

