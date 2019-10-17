


#include "DIO.h"
#include "UART.h"
#include <avr/interrupt.h>
#include "stdlib.h"
#include "LCD.h"
#include"keypad.h"

int main(void)
{
//DDRC &= ~(1<<PIN4);
	LCD_init();
	DIO_init(2);
	UART_Init();
uint8 Get_Speed =0;
uint8 Get_Time =0;
uint8 Get_Speed_1 =0;
uint8 Get_Time_1 =0;
int Distance =0;
LCD_gotoRawCol(0,0);
LCD_displayStrRowCol(0,0,"Distance: ");
LCD_gotoRawCol(0,10);
LCD_IntToStr(Distance);
LCD_displayStrRowCol(0,13,"Cm");
//DDRB|=1<<PINB4;
//DDRC&=~(1<<PINB4);

	while(1)
	{
		if(DIO_read(PORT_C,PIN4))
		{
			_delay_ms(250);
			UART_Send('g');
			Get_Speed_1 = UART_Recieve();
		//	Get_Speed=atoi(&Get_Speed_1);
			_delay_ms(1);
			Get_Time_1= UART_Recieve();
			//Get_Time=atoi(&Get_Time_1);
			PORTB^=1<<PINB4;
		}
		if(DIO_read(PORT_B,PIN2))
		{
			_delay_ms(250);

			UART_Send('g');
			Distance = Get_Speed_1 * Get_Time_1;
			LCD_gotoRawCol(0,10);
			LCD_displayStrRowCol(0,9,"    ");
			LCD_gotoRawCol(0,10);
			LCD_IntToStr(Distance);
			Get_Speed=0;
			Get_Time=0;
		}
	}
}


