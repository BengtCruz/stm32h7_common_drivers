/*
 * gpioh.h
 *
 *  Created on: Nov 26, 2022
 *      Author: bengt
 */
#ifndef GPIOH_H_
#define GPIOH_H_

#include <main.h>

#define GPIOBEN				(1U<<1)
#define GPIOEEN				(1U<<4)

#define PIN_PB2_IN			(1U<<5)
#define PIN_PB2_IN2			(1U<<4)

#define PIN_PB0_OUT			(1U<<1)
#define PIN_PB14_OUT		(1U<<29)
#define PIN_PE1_OUT			(1U<<3)

#define RESET_GPIOB_MODER	(0xFFFFFEBF)
#define RESET_GPIOE_MODER 	(0xFFFFFFFF)

#define PIN_PB2				(1U<<2)
#define	PIN_PB0				(1U<<0)
#define PIN_PB14			(1U<<14)
#define PIN_PE1				(1U<<1)


#define READ_PIN_PB2		GPIOB->IDR & PIN_PB2
#define SET_PIN_PB0			GPIOB->ODR |= PIN_PB0
#define RESET_PIN_PB0		GPIOB->ODR &=~ PIN_PB0
#define TOGGLE_PIN_PB14		GPIOB->ODR ^= PIN_PB14
#define TOGGLE_PIN_PE1		GPIOE->ODR ^= PIN_PE1

/* Function Prototypes */
void gpio_init(void);

/* Public Function Declaration */
extern void gpio_init(void);

#endif /* GPIOH_H_ */
