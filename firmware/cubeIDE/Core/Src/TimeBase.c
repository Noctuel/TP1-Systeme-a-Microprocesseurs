/*
 * TimeBase.C
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */
#include "stm32l0xx_ll_tim.h"

void TimeBaseStartIT(void){
		LL_TIM_EnableCounter(TIM21);// activer counter
		LL_TIM_EnableIT_UPDATE(TIM21);// activer interruption
}
