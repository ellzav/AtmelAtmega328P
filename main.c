/*
 * basic.c
 *
 * Created: 5/17/2020 10:29:57 AM
 * Author : Daniel
 */ 


#define F_CPU 16000000 // hz de cristal interno


//---Bibliotecas auxiliares
#include <avr/io.h>
#include <util/delay.h>
#define Led (PORTB5) //Define o led no PORTB5


#define set_bit(reg,bit) (reg |= (1<<bit)) // Define o bit a 1 
#define reset_bit(reg,bit) (reg &= ~(1<<bit)) // Define o bit a 0 

int main(void)
{
	DDRB=0x00; // define tudo com entradas
	set_bit(DDRB, Led); // Define o PB5 como saída
	    
    while (1) 
    {
		// 00000000 & 000 000 10 --- Teste se o PINB1 está on
		
		if((PINB & 0x02)){
		set_bit(PORTB, Led );
		
		} else{
			
			reset_bit(PORTB,Led);
		
		}
		
    }
}

