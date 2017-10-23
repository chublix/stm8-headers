/*
stm8s103f3 flash registers map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 33
*/

#ifndef __STM8S103F_FLASH_H
#define __STM8S103F_FLASH_H

#define FLASH_CR1   *(unsigned char*)(0x505A) /* Flash control register 1 */
#define FLASH_CR2   *(unsigned char*)(0x505B) /* Flash control register 2 */
#define FLASH_NCR2  *(unsigned char*)(0x505C) /* Flash complementary control register 2 */
#define FLASH_FPR   *(unsigned char*)(0x505D) /* Flash protection register */
#define FLASH_NFPR  *(unsigned char*)(0x505E) /* Flash complementary protection register */
#define FLASH_IAPSR *(unsigned char*)(0x505F) /* Flash in-application programming status register */
#define FLASH_PUKR  *(unsigned char*)(0x5062) /* Flash program memory unprotection register */
#define FLASH_DUKR  *(unsigned char*)(0x5064) /* Data EEPROM unprotection register */

#endif /* __STM8S103F_FLASH_H */