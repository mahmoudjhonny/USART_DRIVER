/*
 * UART_interface.h
 *
 * Created: 13/10/2023 16:28:47
 *  Author: AMIT
 */ 


#ifndef UART_INTERFACE_H_
#define UART_INTERFACE_H_


void UART_Vid_Init() ; 
void UART_Vid_TX(u8 copy_u8_data) ; 
u8 UART_Vid_RX(void) ; 


#endif /* UART_INTERFACE_H_ */