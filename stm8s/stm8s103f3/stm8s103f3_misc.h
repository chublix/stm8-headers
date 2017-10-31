/*
stm8s103f3 wwdg, iwdg, awu, beep registers map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 41
*/

#ifndef __STM8S103F_MISC_H
#define __STM8S103F_MISC_H

/* WWDG */
#define WWDG_CR     *(unsigned char*)(0x7F00) /* WWDG control register */
#define WWDG_WR     *(unsigned char*)(0x7F01) /* WWDR window register */

/* IWDG */
#define IWDG_KR     *(unsigned char*)(0x7F02) /* IWDG key register */
#define IWDG_PR     *(unsigned char*)(0x7F03) /* IWDG prescaler register */
#define IWDG_RLR    *(unsigned char*)(0x7F04) /* IWDG reload register */

/* AWU */
#define AWU_CSR1    *(unsigned char*)(0x7F05) /* AWU control/status register 1 */
#define AWU_APR     *(unsigned char*)(0x7F06) /* AWU asynchronous prescaler buffer register */
#define AWU_TBR     *(unsigned char*)(0x7F07) /* AWU timebase selection register */

/* BEEP */
#define BEEP_CSR    *(unsigned char*)(0x7F08) /* BEEP control/status register */


#endif /* __STM8S103F_MISC_H */