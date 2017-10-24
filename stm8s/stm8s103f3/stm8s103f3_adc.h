/*
stm8s103f3 adc registers map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 33,34
*/

#ifndef __STM8S103F_ADC_H
#define __STM8S103F_ADC_H

#include <stdint.h>

#define ADC_CSR     *(unsigned char*)(0x5400) /* ADC control/status register */                 /* Reset status: 0x00 */
#define ADC_CR1     *(unsigned char*)(0x5401) /* ADC configuration register 1 */                /* Reset status: 0x00 */
#define ADC_CR2     *(unsigned char*)(0x5402) /* ADC configuration register 2 */                /* Reset status: 0x00 */
#define ADC_CR3     *(unsigned char*)(0x5403) /* ADC configuration register 3 */                /* Reset status: 0x00 */
#define ADC_DRH     *(unsigned char*)(0x5404) /* ADC data register high */                      /* Reset status: 0xXX */
#define ADC_DRL     *(unsigned char*)(0x5405) /* ADC data register low */                       /* Reset status: 0xXX */
#define ADC_TDRH    *(unsigned char*)(0x5406) /* ADC Schmitt trigger disable register high */   /* Reset status: 0x00 */
#define ADC_TDRL    *(unsigned char*)(0x5407) /* ADC Schmitt trigger disable register low */    /* Reset status: 0x00 */
#define ADC_HTRH    *(unsigned char*)(0x5408) /* ADC high threshold register high */            /* Reset status: 0x03 */
#define ADC_HTRL    *(unsigned char*)(0x5409) /* ADC high threshold register low */             /* Reset status: 0xFF */
#define ADC_LTRH    *(unsigned char*)(0x540A) /* ADC low threshold register high */             /* Reset status: 0x00 */
#define ADC_LTRL    *(unsigned char*)(0x540B) /* ADC low threshold register low */              /* Reset status: 0x00 */
#define ADC_AWSRH   *(unsigned char*)(0x540C) /* ADC analog watchdog status register high */    /* Reset status: 0x00 */
#define ADC_AWSRL   *(unsigned char*)(0x540D) /* ADC analog watchdog status register low */     /* Reset status: 0x00 */
#define ADC_AWCRH   *(unsigned char*)(0x540E) /* ADC analog watchdog control register high */   /* Reset status: 0x00 */
#define ADC_AWCRL   *(unsigned char*)(0x540F) /* ADC analog watchdog control register low */    /* Reset status: 0x00 */

// test code for first stage
uint16_t ADC_DBxR(uint8_t buffer) {
    uint16_t temph = 0;
    uint8_t templ = 0;
  
    // Check the parameters
    if (buffer > 9) {
        return 0;
    }
  
    if ((ADC_CR2 & 0x08) != 0) { // Right alignment
        // Read LSB first
        templ = *(uint8_t*)(uint16_t)((uint16_t)0x53E0 + (uint8_t)(buffer << 1) + 1);
        // Then read MSB
        temph = *(uint8_t*)(uint16_t)((uint16_t)0x53E0 + (uint8_t)(buffer << 1));
        temph = (uint16_t)(templ | (uint16_t)(temph << (uint8_t)8));
    } else { // Left alignment 
        // Read MSB first
        temph = *(uint8_t*)(uint16_t)((uint16_t)0x53E0 + (uint8_t)(buffer << 1));
        // Then read LSB
        templ = *(uint8_t*)(uint16_t)((uint16_t)0x53E0 + (uint8_t)(buffer << 1) + 1);
        temph = (uint16_t)((uint16_t)((uint16_t)templ << 6) | (uint16_t)(temph << 8));
    }

    return ((uint16_t)temph);
}

// #error "Also need add ADC data registers"

#endif /* __STM8S103F_ADC_H */