/*
 * UART_interface.c
 *
 * Created: 13/10/2023 16:29:25
 *  Author: AMIT
 */ 
#include "BIT_MATH.h" 
#include "STD_TYPE.h" 
#include "UART_private.h" 



void UART_Vid_Init(){
	
 u8 Loc_u8_temp=0 ; 
 // set MSB --> 7 TO select UCSRC register 
       SET_BIT(Loc_u8_temp,7) ; 
	   /* select 8 bit data */
	   SET_BIT(Loc_u8_temp,1) ; 
	   SET_BIT(Loc_u8_temp,2) ; 
	   // SET UCSRC
	   UCSRC_REG=Loc_u8_temp ; 
	   
	   /* SET baud rate */
	   UBRRL_REG=103 ;  // F=16MHZ , 9600 (bps)
	   
	   /* enable TX */
	   SET_BIT(UCSRB_REG,3) ;
	   /* enable RX */
	   SET_BIT(UCSRB_REG,4) ; 
	   
 
	
	
}
void UART_Vid_TX(u8 copy_u8_data){
	 
	    UDR_REG= copy_u8_data ; 
		while(GET_BIT(UCSRA_REG,5)==0) ; // WATING TO SEND DATA
	
}
u8 UART_Vid_RX(void){
	
	
	while(GET_BIT(UCSRA_REG,7)==0) ;
	return UDR_REG ; 
	
}