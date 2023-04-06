#ifndef __IIC_H__
#define __IIC_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

extern I2C_HandleTypeDef hi2c2;

void I2C2_Init(void);

#ifdef __cplusplus
}
#endif

#endif
