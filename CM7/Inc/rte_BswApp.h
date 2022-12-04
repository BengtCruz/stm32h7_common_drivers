/*
 * rte_BswApp.h
 *
 *  Created on: Nov 26, 2022
 *      Author: bengt
 */

#ifndef RTE_BSWAPP_H_
#define RTE_BSWAPP_H_

#include <gpioh.h>


/* DIOH - Output */
#define rte_set_greenled()		SET_PIN_PB0
#define rte_reset_greenled()	RESET_PIN_PB0

#define rte_toggle_redled()		TOGGLE_PIN_PB14
#define rte_toggle_yellowled()	TOGGLE_PIN_PE1

/* DIOH - Input */
#define rte_read_pb2()			READ_PIN_PB2

#endif /* RTE_BSWAPP_H_ */
