/*
 * UART_RX.c
 *
 * Created: 13/10/2023 17:04:31
 * Author : AMIT
 */ 


#include "BIT_MATH.h"
#include "STD_TYPE.h"
#include "UART_interface.h"
#include "DIO_interface.h"



void main(){
	 u8 val=0 ; 
	DIO_Vid_Set_Pin_Dir(PORTD,PIN0,INPUT) ;
	DIO_Vid_Set_Pin_Dir(PORTC,PIN7,OUTPUT)  ;
	UART_Vid_Init() ;
	
	
	while(1){
		
		val=UART_Vid_RX() ; 
		
		if(val=='F'){
			DIO_Vid_Set_Pin_Val(PORTC,PIN7,HIGH) ; 
		}
		else
		{
			DIO_Vid_Set_Pin_Val(PORTC,PIN7,LOW) ; 
		}
		
	}
	
	
}

