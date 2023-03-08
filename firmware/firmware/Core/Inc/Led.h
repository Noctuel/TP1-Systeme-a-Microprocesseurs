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
} TIMER_LED;

//Démarre le timer
void LedStart(void);

// Configure le rapport cyclique de la PMW entre 0 et 255
void LedSetValue (uint8_t val);

// A chaque appel, cette fonction incrémente la luminosité de la LED
// Arrivé à la valeur max, chaque apeel décrémente la LED
void LedPulse(void);

#endif /* INC_LED_H_ */
