/*
stm8s103f3 iterrupt 
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 41,43
*/

#ifndef __STM8S103F_ITC_H
#define __STM8S103F_ITC_H

/* interrupt controller registers */

#define ITC_SPR1      *(unsigned char*)(0x7F70)
#define ITC_SPR2      *(unsigned char*)(0x7F72)
#define ITC_SPR3      *(unsigned char*)(0x7F71)
#define ITC_SPR4      *(unsigned char*)(0x7F73)
#define ITC_SPR5      *(unsigned char*)(0x7F74)
#define ITC_SPR6      *(unsigned char*)(0x7F75)
#define ITC_SPR7      *(unsigned char*)(0x7F76)
#define ITC_SPR8      *(unsigned char*)(0x7F77)


/* iterrupt vector mapping */

#define ITC_IRQ_TLI          0  /* External top level interrupt */
#define ITC_IRQ_AWU          1  /* Auto wake up from halt */
#define ITC_IRQ_CLK          2  /* Clock controller */
#define ITC_IRQ_EXTI0        3  /* Port A external interrupts */
#define ITC_IRQ_EXTI1        4  /* Port B external interrupts */
#define ITC_IRQ_EXTI2        5  /* Port C external interrupts */
#define ITC_IRQ_EXTI3        6  /* Port D external interrupts */
#define ITC_IRQ_EXTI4        7  /* Port E external interrupts */
#define ITC_IRQ_SPI          10 /* SPI end of transfer */
#define ITC_IRQ_TIM1_UPDATE  11 /* TIM1 update / overflow / underflow / trigger / break */
#define ITC_IRQ_TIM1_CAPTURE 12 /* TIM1 capture / compare */
#define ITC_IRQ_TIM2_UPDATE  13 /* TIM2 update / overflow */
#define ITC_IRQ_TIM2_CAPTURE 14 /* TIM2 capture / compare */
#define ITC_IRQ_UART1_TX     17 /* UART Tx complete */
#define ITC_IRQ_UART1_RX     18 /* UART Receive register DATA FULL  */
#define ITC_IRQ_I2C          19 /* I2C interrupt */
#define ITC_IRQ_ADC1         22 /* ADC1 end of conversion / analog watchdog interrupt */
#define ITC_IRQ_TIM4_UPDATE  23 /* TIM4 update / overflow */
#define ITC_IRQ_FLASH        24 /* Flash EOP/WR_PG_DIS */

#endif /* __STM8S103F_ITC_H */