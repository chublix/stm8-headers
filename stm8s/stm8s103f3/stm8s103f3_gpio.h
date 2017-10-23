/*
stm8s103f3 gpio register map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
page 32
*/

#ifndef __STM8S103F_GPIO_H
#define __STM8S103F_GPIO_H

/* Port A  */
#define PA_ODR *(unsigned char*)(0x5000) /* Port A data output latch register */
#define PA_IDR *(unsigned char*)(0x5001) /* Port A input pin value register */
#define PA_DDR *(unsigned char*)(0x5002) /* Port A data direction register */
#define PA_CR1 *(unsigned char*)(0x5003) /* Port A control register 1 */
#define PA_CR2 *(unsigned char*)(0x5004) /* Port A control register 2 */

/* Port B  */
#define PB_ODR *(unsigned char*)(0x5005) /* Port B data output latch register */
#define PB_IDR *(unsigned char*)(0x5006) /* Port B input pin value register */
#define PB_DDR *(unsigned char*)(0x5007) /* Port B data direction register */
#define PB_CR1 *(unsigned char*)(0x5008) /* Port B control register 1 */
#define PB_CR2 *(unsigned char*)(0x5009) /* Port B control register 2 */

/* Port C  */
#define PC_ODR *(unsigned char*)(0x500A) /* Port C data output latch register */
#define PC_IDR *(unsigned char*)(0x500B) /* Port C input pin value register */
#define PC_DDR *(unsigned char*)(0x500C) /* Port C data direction register */
#define PC_CR1 *(unsigned char*)(0x500D) /* Port C control register 1 */
#define PC_CR2 *(unsigned char*)(0x500E) /* Port C control register 2 */

/* Port D  */
#define PD_ODR *(unsigned char*)(0x500F) /* Port D data output latch register */
#define PD_IDR *(unsigned char*)(0x5010) /* Port D input pin value register */
#define PD_DDR *(unsigned char*)(0x5011) /* Port D data direction register */
#define PD_CR1 *(unsigned char*)(0x5012) /* Port D control register 1 */
#define PD_CR2 *(unsigned char*)(0x5013) /* Port D control register 2 */

/* Port E  */
#define PE_ODR *(unsigned char*)(0x5014) /* Port E data output latch register */
#define PE_IDR *(unsigned char*)(0x5015) /* Port E input pin value register */
#define PE_DDR *(unsigned char*)(0x5016) /* Port E data direction register */
#define PE_CR1 *(unsigned char*)(0x5017) /* Port E control register 1 */
#define PE_CR2 *(unsigned char*)(0x5018) /* Port E control register 2 */

/* Port F  */
#define PF_ODR *(unsigned char*)(0x5019) /* Port F data output latch register */
#define PF_IDR *(unsigned char*)(0x501A) /* Port F input pin value register */
#define PF_DDR *(unsigned char*)(0x501B) /* Port F data direction register */
#define PF_CR1 *(unsigned char*)(0x501C) /* Port F control register 1 */
#define PF_CR2 *(unsigned char*)(0x501D) /* Port F control register 2 */

#endif /* __STM8S103F_GPIO_H */