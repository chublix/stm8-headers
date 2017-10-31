/*
stm8s103f3 timers registers map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 36-39
*/

#ifndef __STM8S103F_TIMERS_H
#define __STM8S103F_TIMERS_H


/* TIM1 */
#define TIM1_CR1    *(unsigned char*)(0x5250) /* TIM1 control register 1 */                 /* Reset status: 0x00 */
#define TIM1_CR2    *(unsigned char*)(0x5251) /* TIM1 control register 2 */                 /* Reset status: 0x00 */
#define TIM1_SMCR   *(unsigned char*)(0x5252) /* TIM1 slave mode control register  */       /* Reset status: 0x00 */
#define TIM1_ETR    *(unsigned char*)(0x5253) /* TIM1 external trigger register */          /* Reset status: 0x00 */
#define TIM1_IER    *(unsigned char*)(0x5254) /* TIM1 interrupt enable register */          /* Reset status: 0x00 */
#define TIM1_SR1    *(unsigned char*)(0x5255) /* TIM1 status register 1 */                  /* Reset status: 0x00 */
#define TIM1_SR2    *(unsigned char*)(0x5256) /* TIM1 status register 2 */                  /* Reset status: 0x00 */
#define TIM1_EGR    *(unsigned char*)(0x5257) /* TIM1 event generation register */          /* Reset status: 0x00 */
#define TIM1_CCMR1  *(unsigned char*)(0x5258) /* TIM1 capture/compare mode register 1 */    /* Reset status: 0x00 */
#define TIM1_CCMR2  *(unsigned char*)(0x5259) /* TIM1 capture/compare mode register 2 */    /* Reset status: 0x00 */
#define TIM1_CCMR3  *(unsigned char*)(0x525A) /* TIM1 capture/compare mode register 3 */    /* Reset status: 0x00 */
#define TIM1_CCMR4  *(unsigned char*)(0x525B) /* TIM1 capture/compare mode register 4 */    /* Reset status: 0x00 */
#define TIM1_CCER1  *(unsigned char*)(0x525C) /* TIM1 capture/compare enable register 1 */  /* Reset status: 0x00 */
#define TIM1_CCER2  *(unsigned char*)(0x525D) /* TIM1 capture/compare enable register 2 */  /* Reset status: 0x00 */
#define TIM1_CNTRH  *(unsigned char*)(0x525E) /* TIM1 counter high */                       /* Reset status: 0x00 */
#define TIM1_CNTRL  *(unsigned char*)(0x525F) /* TIM1 counter low */                        /* Reset status: 0x00 */

#define TIM1_PSCRH  *(unsigned char*)(0x5260) /* TIM1 prescaler register high */            /* Reset status: 0x00 */
#define TIM1_PSCRL  *(unsigned char*)(0x5261) /* TIM1 prescaler register low */             /* Reset status: 0x00 */
#define TIM1_ARRH   *(unsigned char*)(0x5262) /* TIM1 auto-reload register high */          /* Reset status: 0xFF */      
#define TIM1_ARRL   *(unsigned char*)(0x5263) /* TIM1 auto-reload register low */           /* Reset status: 0xFF */
#define TIM1_RCR    *(unsigned char*)(0x5264) /* TIM1 repetition counter register */        /* Reset status: 0x00 */
#define TIM1_CCR1H  *(unsigned char*)(0x5265) /* TIM1 capture/compare register 1 high */    /* Reset status: 0x00 */
#define TIM1_CCR1L  *(unsigned char*)(0x5266) /* TIM1 capture/compare register 1 low */     /* Reset status: 0x00 */
#define TIM1_CCR2H  *(unsigned char*)(0x5267) /* TIM1 capture/compare register 2 high */    /* Reset status: 0x00 */
#define TIM1_CCR2L  *(unsigned char*)(0x5268) /* TIM1 capture/compare register 2 low */     /* Reset status: 0x00 */
#define TIM1_CCR3H  *(unsigned char*)(0x5269) /* TIM1 capture/compare register 3 high */    /* Reset status: 0x00 */
#define TIM1_CCR3L  *(unsigned char*)(0x526A) /* TIM1 capture/compare register 3 low */     /* Reset status: 0x00 */
#define TIM1_CCR4H  *(unsigned char*)(0x526B) /* TIM1 capture/compare register 4 high */    /* Reset status: 0x00 */
#define TIM1_CCR4L  *(unsigned char*)(0x526C) /* TIM1 capture/compare register 4 low */     /* Reset status: 0x00 */
#define TIM1_BKR    *(unsigned char*)(0x526D) /* TIM1 break register */                     /* Reset status: 0x00 */
#define TIM1_DTR    *(unsigned char*)(0x526E) /* TIM1 dead-time register */                 /* Reset status: 0x00 */
#define TIM1_OISR   *(unsigned char*)(0x526F) /* TIM1 output idle state register */         /* Reset status: 0x00 */


/* TIM2 */
#define TIM2_CR1    *(unsigned char*)(0x5300) /* TIM2 control register 1 */                 /* Reset status: 0x00 */
#define TIM2_IER    *(unsigned char*)(0x5303) /* TIM2 Interrupt enable register */          /* Reset status: 0x00 */
#define TIM2_SR1    *(unsigned char*)(0x5304) /* TIM2 status register 1 */                  /* Reset status: 0x00 */
#define TIM2_SR2    *(unsigned char*)(0x5305) /* TIM2 status register 2 */                  /* Reset status: 0x00 */
#define TIM2_EGR    *(unsigned char*)(0x5306) /* TIM2 event generation register */          /* Reset status: 0x00 */
#define TIM2_CCMR1  *(unsigned char*)(0x5307) /* TIM2 capture/compare mode register 1 */    /* Reset status: 0x00 */
#define TIM2_CCMR2  *(unsigned char*)(0x5308) /* TIM2 capture/compare mode register 2 */    /* Reset status: 0x00 */
#define TIM2_CCMR3  *(unsigned char*)(0x5309) /* TIM2 capture/compare mode register 3 */    /* Reset status: 0x00 */
#define TIM2_CCER1  *(unsigned char*)(0x530A) /* TIM2 capture/compare enable register 1 */  /* Reset status: 0x00 */
#define TIM2_CCER2  *(unsigned char*)(0x530B) /* TIM2 capture/compare enable register 2 */  /* Reset status: 0x00 */
#define TIM2_CNTRH  *(unsigned char*)(0x530C) /* TIM2 counter high */                       /* Reset status: 0x00 */
#define TIM2_CNTRL  *(unsigned char*)(0x530D) /* TIM2 counter low */                        /* Reset status: 0x00 */
#define TIM2_PSCR   *(unsigned char*)(0x530E) /* TIM2 prescaler register */                 /* Reset status: 0x00 */
#define TIM2_ARRH   *(unsigned char*)(0x530F) /* TIM2 auto-reload register high */          /* Reset status: 0xFF */
#define TIM2_ARRL   *(unsigned char*)(0x5310) /* TIM2 auto-reload register low */           /* Reset status: 0xFF */
#define TIM2_CCR1H  *(unsigned char*)(0x5311) /* TIM2 capture/compare register 1 high */    /* Reset status: 0x00 */
#define TIM2_CCR1L  *(unsigned char*)(0x5312) /* TIM2 capture/compare register 1 low */     /* Reset status: 0x00 */
#define TIM2_CCR2H  *(unsigned char*)(0x5313) /* TIM2 capture/compare reg. 2 high */        /* Reset status: 0x00 */
#define TIM2_CCR2L  *(unsigned char*)(0x5314) /* TIM2 capture/compare register 2 low */     /* Reset status: 0x00 */
#define TIM2_CCR3H  *(unsigned char*)(0x5315) /* TIM2 capture/compare register 3 high */    /* Reset status: 0x00 */
#define TIM2_CCR3L  *(unsigned char*)(0x5316) /* TIM2 capture/compare register 3 low */     /* Reset status: 0x00 */


/* TIM4 */
#define TIM4_CR1    *(unsigned char*)(0x5340) /* TIM4 control register 1 */                 /* Reset status: 0x00 */
#define TIM4_IER    *(unsigned char*)(0x5343) /* TIM4 interrupt enable register */          /* Reset status: 0x00 */
#define TIM4_SR     *(unsigned char*)(0x5344) /* TIM4 status register */                    /* Reset status: 0x00 */
#define TIM4_EGR    *(unsigned char*)(0x5345) /* TIM4 event generation register */          /* Reset status: 0x00 */
#define TIM4_CNTR   *(unsigned char*)(0x5346) /* TIM4 counter */                            /* Reset status: 0x00 */
#define TIM4_PSCR   *(unsigned char*)(0x5347) /* TIM4 prescaler register */                 /* Reset status: 0x00 */
#define TIM4_ARR    *(unsigned char*)(0x5348) /* TIM4 auto-reload registe */                /* Reset status: 0xFF */


#endif /* __STM8S103F_TIMERS_H */