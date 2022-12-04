/*
 * gpioh.c
 *
 *  Created on: Nov 26, 2022
 *      Author: bengt
 */

#include <gpioh.h>


void gpio_init(void)
{
	/* GPIO PERIPH ENABLE */
	RCC->AHB4ENR |= GPIOBEN;
	RCC->AHB4ENR |= GPIOEEN;

	/* GPIO PORT PIN MODE */
	//Input
	GPIOB->MODER &=~ PIN_PB2_IN2;
	GPIOB->MODER &=~ PIN_PB2_IN;

	//Output
	GPIOB->MODER &=~ PIN_PB0_OUT;
	GPIOB->MODER &=~ PIN_PB14_OUT;
	GPIOE->MODER &=~ PIN_PE1_OUT;

	/* GPIO PORT PIN I/0 DATA SET TO 0 */
	GPIOB->IDR &=~ PIN_PB2;
	GPIOB->ODR &=~ PIN_PB0;
	GPIOB->ODR &=~ PIN_PB14;
	GPIOE->ODR &=~ PIN_PE1;
}

