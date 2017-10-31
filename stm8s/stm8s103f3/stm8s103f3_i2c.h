/*
stm8s103f3 i2c registers map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 35
*/

#ifndef __STM8S103F_I2C_H
#define __STM8S103F_I2C_H

#define I2C_CR1     *(unsigned char*)(0x5210) /* I2C control register 1 */
#define I2C_CR2     *(unsigned char*)(0x5211) /* I2C control register 2 */
#define I2C_FREQR   *(unsigned char*)(0x5212) /* I2C frequency register */
#define I2C_OARL    *(unsigned char*)(0x5213) /* I2C Own address register low */
#define I2C_OARH    *(unsigned char*)(0x5214) /* I2C Own address register high */
#define I2C_DR      *(unsigned char*)(0x5216) /* I2C data register */
#define I2C_SR1     *(unsigned char*)(0x5217) /* I2C status register 1 */
#define I2C_SR2     *(unsigned char*)(0x5218) /* I2C status register 2 */
#define I2C_SR3     *(unsigned char*)(0x5219) /* I2C status register 3 */
#define I2C_ITR     *(unsigned char*)(0x521A) /* I2C interrupt control register */
#define I2C_CCRL    *(unsigned char*)(0x521B) /* I2C Clock control register low */
#define I2C_CCRH    *(unsigned char*)(0x521C) /* I2C Clock control register high */
#define I2C_TRISER  *(unsigned char*)(0x521D) /* I2C TRISE register */
#define I2C_PECR    *(unsigned char*)(0x521E) /* I2C packet error checking register */

#endif /* __STM8S103F_I2C_H */