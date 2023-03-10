/*
 * Serial.c
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */
#include "stm32l0xx_ll_usart.h"

// Cette fonction pourra être utilisée par le Shell v0.4
uint8_t SerialTransmit(char * pData, uint16_t Size,USART_TypeDef* USARTx){
	for(int i=0;i<Size;i++)
	{
		while(LL_USART_IsActiveFlag_TXE(USARTx)==0){}
		LL_USART_TransmitData8(USARTx, pData[i]);
	}
	return 0;
}
// Dans cet exemple, on fait du polling, et c'est pas très grave
char SerialReceiveChar(USART_TypeDef* USARTx){
	while(LL_USART_IsActiveFlag_RXNE(USARTx)==0);
	char ch = (char)LL_USART_ReceiveData8(USARTx);
	return ch;
}
