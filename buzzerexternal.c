#include<LPC17xx.h>
int main(void)
{
	SystemInit();
	LPC_PINCON->PINSEL0&=0xFF3FFFFF;
	LPC_GPIO0->FIODIR|=0x00000800;
	LPC_GPIO0->FIOSET=0x00000800;
	while(1);
}