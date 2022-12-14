/*
 * uart.h
 *
 *  Created on: Dec 2, 2022
 *      Author: Phuc
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);
void uart_communiation_fsm (void);
void command_parser_fsm (void);

#endif /* INC_UART_H_ */
