/*
stm8s103f3 clk register map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 33,34
*/

#ifndef __STM8S103F_CLK_H
#define __STM8S103F_CLK_H

#define CLK_ICKR      *(unsigned char*)(0x50C0) /* Internal clock control register */
#define CLK_ECKR      *(unsigned char*)(0x50C1) /* External clock control register */
#define CLK_CMSR      *(unsigned char*)(0x50С3) /* Clock master status register */
#define CLK_SWR       *(unsigned char*)(0x50С4) /* Clock master switch register */
#define CLK_SWCR      *(unsigned char*)(0x50C5) /* Clock switch control register */
#define CLK_CKDIVR    *(unsigned char*)(0x50C6) /* Clock divider register */
#define CLK_PCKENR1   *(unsigned char*)(0x50C7) /* Peripheral clock gating register 1 */
#define CLK_CSSR      *(unsigned char*)(0x50C8) /* Clock security system register */
#define CLK_CCOR      *(unsigned char*)(0x50C9) /* Configurable clock control register */
#define CLK_PCKENR2   *(unsigned char*)(0x50CA) /* Peripheral clock gating register 2 */
#define CLK_HSITRIMR  *(unsigned char*)(0x50CC) /* HSI clock calibration trimming register */
#define CLK_SWIMCCR   *(unsigned char*)(0x50CD) /* SWIM clock control register */

#endif /* __STM8S103F_CLK_H */