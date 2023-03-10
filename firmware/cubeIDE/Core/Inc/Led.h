/*
 * Led.h
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */

#ifndef INC_LED_H_
#define INC_LED_H_

typedef struct {
	int lum;
	int inc;
	TIM_TypeDef* timer;
	uint32_t channel;
} TIMER_LED;

//Démarre le timer
void LedStart(TIMER_LED *myled);

// Configure le rapport cyclique de la PMW entre 0 et 255
void LedSetValue (TIMER_LED *myled);

// A chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur max, chaque apeel décrémente la LED
void LedPulse(TIMER_LED *myled);

#endif /* INC_LED_H_ */
