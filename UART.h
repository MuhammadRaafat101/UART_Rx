/*
 * UART.h
 *
 *  Created on: Oct 11, 2019
 *      Author: Rafaat
 */

#ifndef UART_H_
#define UART_H_
#include <avr/io.h>
#include "stdtypes.h"
void UART_Init();
uint8 UART_Recieve();
void UART_Send(uint8 Char);
#endif /* UART_H_ */
