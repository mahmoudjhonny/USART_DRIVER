/*
 * DIO_interface.h
 *
 * Created: 26/08/2023 16:17:31
 *  Author: AMIT
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
/*****************************************************************************
* Function Name: DIO_Vid_Set_Pin_Dir
* Purpose      : set pin dir (OUTPUT , INPUT) 
* Parameters   : u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_dir
* Return value : void
*****************************************************************************/
void DIO_Vid_Set_Pin_Dir(u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_dir );
/*****************************************************************************
* Function Name: DIO_Vid_Set_Pin_Val
* Purpose      : set pin VAL (HIGH , LOW)
* Parameters   : u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_val
* Return value : void
*****************************************************************************/
void DIO_Vid_Set_Pin_Val(u8 Copy_u8_port,u8 Copy_u8_pin,u8 Copy_u8_val);
/*****************************************************************************
* Function Name:  DIO_u8_Get_Pin_Val
* Purpose      : get pin status  (HIGH ,LOW ) 
* Parameters   : u8 Copy_u8_port,u8 Copy_u8_pin
* Return value : u8
*****************************************************************************/
u8   DIO_u8_Get_Pin_Val(u8 Copy_u8_port,u8 Copy_u8_pin) ;
/***************************************************************************************/
void DIO_Vid_Set_Port_Dir(u8 copy_u8_port,u8 copy_u8_dir) ;
void DIO_Vid_Set_Port_Val(u8 copy_u8_port,u8 copy_u8_val) ;

/* port dir  */

#define  PORT_OUTPUT  0xff 
#define PORT_INPUT   0x00 

/*port val  */
#define  PORT_HIGH  0xff
#define PORT_LOW   0x00
/* PIN DIR  */
#define  OUTPUT    1 
#define  INPUT     0

/* PIN VAL  */
#define  HIGH    1 
#define  LOW      0 

/* port  */

#define  PORTA     0 
#define  PORTB     1 
#define  PORTC     2 
#define  PORTD     3
/*PINS */ 
#define  PIN0      0
#define  PIN1      1
#define  PIN2      2
#define  PIN3      3
#define  PIN4      4
#define  PIN5      5
#define  PIN6      6
#define  PIN7      7 


#endif /* DIO_INTERFACE_H_ */