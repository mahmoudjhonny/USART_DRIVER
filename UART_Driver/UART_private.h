/*
 * UART_private.h
 *
 * Created: 13/10/2023 16:29:04
 *  Author: AMIT
 */ 


#ifndef UART_PRIVATE_H_
#define UART_PRIVATE_H_

#define  UDR_REG              *((volatile u8*)0x2C)
#define  UCSRA_REG            *((volatile u8*)0x2B)
#define  UCSRB_REG            *((volatile u8*)0x2A)
#define  UBRRL_REG            *((volatile u8*)0x29)
#define  UCSRC_REG            *((volatile u8*)0x40)
#endif /* UART_PRIVATE_H_ */