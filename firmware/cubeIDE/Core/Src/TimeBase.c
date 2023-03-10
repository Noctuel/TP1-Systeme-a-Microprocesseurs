/*
 * TimeBase.C
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */


void TimeBaseStartIT(void){
		LL_TIM_EnableCounter(TIM21);
		LL_TIM_EnableIT_UPDATE(TIM21);
}
