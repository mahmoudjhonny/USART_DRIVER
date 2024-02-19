/*
 * DIO_interface.c
 *
 * Created: 26/08/2023 16:19:11
 *  Author: AMIT
 */ 

#include "STD_TYPE.h"
#include "BIT_MATH.h" 
#include "DIO_private.h"
#include "DIO_interface.h"

void DIO_Vid_Set_Pin_Dir(u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_dir ){
	
	
	if(Copy_u8_dir==OUTPUT || Copy_u8_dir==INPUT){
	   if(Copy_u8_dir==OUTPUT){
		   
		   switch(Copy_u8_port){
			     /* SET direction ---> output */
			   case PORTA: SET_BIT(DDRA_REG,Copy_u8_pin);break ;
			   case PORTB: SET_BIT(DDRB_REG,Copy_u8_pin);break ;
			   case PORTC: SET_BIT(DDRC_REG,Copy_u8_pin);break ;
			   case PORTD: SET_BIT(DDRD_REG,Copy_u8_pin);break ;
		   }
		   
		   
	   }else
	   {
		       /* SET direction ---> input */
		    switch(Copy_u8_port){
			    
			    case PORTA:CLR_BIT(DDRA_REG,Copy_u8_pin);break ;
			    case PORTB:CLR_BIT(DDRB_REG,Copy_u8_pin);break ;
			    case PORTC:CLR_BIT(DDRC_REG,Copy_u8_pin);break ;
			    case PORTD:CLR_BIT(DDRD_REG,Copy_u8_pin);break ;
		    }
	   }
	   }
	   }
	
	
	
	
	

void DIO_Vid_Set_Pin_Val(u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_val){
	
	
		if(Copy_u8_val==HIGH || Copy_u8_val==LOW){
			if(Copy_u8_val==HIGH){
				
				switch(Copy_u8_port){
					/* SET VAL ---> HIGH */
					case PORTA: SET_BIT(PORTA_REG,Copy_u8_pin);break ;
					case PORTB: SET_BIT(PORTB_REG,Copy_u8_pin);break ;
					case PORTC: SET_BIT(PORTC_REG,Copy_u8_pin);break ;
					case PORTD: SET_BIT(PORTD_REG,Copy_u8_pin);break ;
				}
				
				
			}else
			{
				/* SET VAL ---> LOW */
				switch(Copy_u8_port){
					
					case PORTA:CLR_BIT(PORTA_REG,Copy_u8_pin);break ;
					case PORTB:CLR_BIT(PORTB_REG,Copy_u8_pin);break ;
					case PORTC:CLR_BIT(PORTC_REG,Copy_u8_pin);break ;
					case PORTD:CLR_BIT(PORTD_REG,Copy_u8_pin);break ;
				}
			}
		}
	}
	
	u8   DIO_u8_Get_Pin_Val(u8 Copy_u8_port,u8 Copy_u8_pin){
		
		u8 LOC_u8_Val=0 ; 
		
		switch(Copy_u8_port){
			
			case PORTA:LOC_u8_Val=GET_BIT(PINA_REG,Copy_u8_pin);break ;
			case PORTB:LOC_u8_Val=GET_BIT(PINB_REG,Copy_u8_pin);break ;
			case PORTC:LOC_u8_Val=GET_BIT(PINC_REG,Copy_u8_pin);break ;
			case PORTD:LOC_u8_Val=GET_BIT(PIND_REG,Copy_u8_pin);break ;
			
		}
		
		return LOC_u8_Val ; 
		
		
		
		
		
		
	}
	
	
	void DIO_Vid_Set_Port_Dir(u8 copy_u8_port,u8 copy_u8_dir){
		
		
			
			switch(copy_u8_port){
				
				case PORTA:DDRA_REG=copy_u8_dir;break ;
				case PORTB:DDRB_REG=copy_u8_dir;break ;
				case PORTC:DDRC_REG=copy_u8_dir;break ;
				case PORTD:DDRD_REG=copy_u8_dir;break ;
			}
		
			
		}
		
	void DIO_Vid_Set_Port_Val(u8 copy_u8_port,u8 copy_u8_val) {
		switch(copy_u8_port){
			
			case PORTA:PORTA_REG=copy_u8_val;break ;
			case PORTB:PORTB_REG=copy_u8_val;break ;
			case PORTC:PORTC_REG=copy_u8_val;break ;
			case PORTD:PORTD_REG=copy_u8_val;break ;
		}
	}
	
	
	
