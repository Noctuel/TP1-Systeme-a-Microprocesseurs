/*
 * Serial.c
 *
 *  Created on: Mar 8, 2023
 *      Author: eleve
 */

// Cette fonction pourra être utilisée par le Shell v0.4
uint8_t SerialTransmit(char * pData, uint16_t Size,USART_TypeDef *USARTx){
	for(int i=0;i<Size;i++)
	{
		LL_USART_TransmitData8(USARTx, pData[i]);
		while(LL_USART_IsActiveFlag_TXE==0)
	}
}
// Dans cet exemple, on fait du polling, et c'est pas très grave
char SerialReceiveChar(USART_TypeDef *USARTx){
	while(LL_USART_IsActiveFlag_RXNE==0)
	return  (char)LL_USART_ReceiveData8(USARTx);
}
