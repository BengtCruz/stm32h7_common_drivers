/*
 * exti.c
 *
 *  Created on: Jan 7, 2023
 *      Author: bengt
 */

#define SYSCFGEN	(1U<<1)

#include "exti.h"

static void exti2_callback(void);

void pb2_exti_init(void)
{
	/* Disable global interrupt */
	__disable_irq();

	/* Enable Clock Access for GPIOB */
	RCC->AHB4ENR |= GPIOBEN;

	/* Enable Clcok Access to SYSCFG */
	RCC->APB4ENR |= SYSCFGEN;

	/* Select PORTB for EXTI2 */
	SYSCFG->EXTICR[0] |= (1U<<8);

	/* UNMASK EXTI2 */
	EXTI->IMR1 |= (1U<<2);

	/* Select edge detection */
	//EXTI->FTSR1 |= (1U<<2);
	EXTI->RTSR1 |= (1U<<2);
	/* Enable exti line in NVIC */
	NVIC_EnableIRQ(EXTI2_IRQn);

	__enable_irq();
}

static void exti2_callback(void)
{

	rte_set_greenled();

	for(int i = 0; i < 10000000; i++);

	rte_reset_greenled();
}

void EXTI2_IRQHandler(void)
{
	if((EXTI->PR1 & LINE2) != 0)
	{
		EXTI->PR1 |= LINE2;

		exti_callback();
	}
}
