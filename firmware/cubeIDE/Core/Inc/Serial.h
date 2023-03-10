/*
 * Serial.h
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */

#ifndef INC_SERIAL_H_
#define INC_SERIAL_H_

// Cette fonction pourra être utilisée par le Shell v0.4
uint8_t SerialTransmit(char * pData, uint16_t Size,USART_TypeDef* USARTx);
// Dans cet exemple, on fait du polling, et c'est pas très grave
char SerialReceiveChar(USART_TypeDef* USARTx);

#endif /* INC_SERIAL_H_ */
