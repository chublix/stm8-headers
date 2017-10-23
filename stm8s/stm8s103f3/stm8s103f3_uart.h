/*
stm8s103f3 uart registers map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 35
*/

#ifndef __STM8S103F_UART_H
#define __STM8S103F_UART_H

#define UART1_SR    *(unsigned char*)(0x5230) /* UART1 status register */
#define UART1_DR    *(unsigned char*)(0x5231) /* UART1 data register */
#define UART1_BRR1  *(unsigned char*)(0x5232) /* UART1 baud rate register 1 */
#define UART1_BRR2  *(unsigned char*)(0x5233) /* UART1 baud rate register 2 */
#define UART1_CR1   *(unsigned char*)(0x5234) /* UART1 control register 1 */
#define UART1_CR2   *(unsigned char*)(0x5235) /* UART1 control register 2 */
#define UART1_CR3   *(unsigned char*)(0x5236) /* UART1 control register 3 */
#define UART1_CR4   *(unsigned char*)(0x5237) /* UART1 control register 4 */
#define UART1_CR5   *(unsigned char*)(0x5238) /* UART1 control register 5 */
#define UART1_GTR   *(unsigned char*)(0x5239) /* UART1 guard time register */
#define UART1_PSCR  *(unsigned char*)(0x523A) /* UART1 prescaler register */

#endif /* __STM8S103F_UART_H */