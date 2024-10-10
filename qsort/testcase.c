#include <htc.h>
#include <math.h>
__CONFIG (FOSC_HS & WDTE_OFF & PWRTE_ON & MCLRE_ON & CP_OFF & CPD_OFF & 
BOREN_OFF & IESO_OFF & FCMEN_OFF & LVP_OFF );
#define _XTAL_FREQ 4000000
void main()
{
ANSEL = 0X00;
ANSELH = 0X00;
TRISE = 0X00;
while(1)
{
PORTE = 0X00;
__delay_ms(500);
PORTE = 0X06;
__delay_ms(500);
}
}