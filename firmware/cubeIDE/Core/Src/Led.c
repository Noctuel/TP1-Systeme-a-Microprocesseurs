/*
 * Led.c
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */
#include "stm32l0xx_ll_tim.h"
#include "Led.h"

//Démarre le timer
void LedStart(TIMER_LED *myled){
	LL_TIM_EnableCounter(myled->timer);
}

// Configure le rapport cyclique de la PMW entre 0 et 255
void LedSetValue (TIMER_LED *myled){
	LL_TIM_OC_SetCompareCH1(myled->timer, myled->lum);
}

// A chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur max, chaque apeel décrémente la LED
void LedPulse(TIMER_LED *myled){
	if(myled->inc==0){
		myled->lum++;
		LedSetValue(myled);
		if(myled.lum == 255)
			myled->inc = 1;
	}
	else{
		myled->lum--;
		LedSetValue(myled);
		if(myled->lum == 0)
			myled->inc = 0;
	}
}
