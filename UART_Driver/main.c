/*
 * main.c
 *
 * Created: 13/10/2023 16:28:11
 *  Author: AMIT
 */ 
#include "BIT_MATH.h" 
#include "STD_TYPE.h" 
#include "UART_interface.h" 
#include "DIO_interface.h"



void main(){
	DIO_Vid_Set_Pin_Dir(PORTD,PIN1,OUTPUT) ; 
	UART_Vid_Init() ; 
	
	UART_Vid_TX('f') ;

	while(1){
	}
}