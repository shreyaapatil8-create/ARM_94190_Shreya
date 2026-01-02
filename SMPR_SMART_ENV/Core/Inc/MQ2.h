/*
 * MQ2.h
 *
 *  Created on: Jan 1, 2026
 *      Author: shrey
 */

#ifndef INC_MQ2_H_
#define INC_MQ2_H_
#include "stm32f4xx_hal.h"
void mq2_Init(ADC_HandleTypeDef*hadc1);
uint16_t mq2_Read();


#endif /* INC_MQ2_H_ */
