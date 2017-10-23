/*
stm8s103f3 spi register map header
based on datasheet http://www.st.com/content/ccc/resource/technical/document/datasheet/ce/13/13/03/a9/a4/42/8f/CD00226640.pdf/files/CD00226640.pdf/jcr:content/translations/en.CD00226640.pdf
pages 34
*/

#ifndef __STM8S103F_SPI_H
#define __STM8S103F_SPI_H

#define SPI_CR1     *(unsigned char*)(0x5200) /* SPI control register 1 */
#define SPI_CR2     *(unsigned char*)(0x5201) /* SPI control register 2 */
#define SPI_ICR     *(unsigned char*)(0x5202) /* SPI interrupt control register */
#define SPI_SR      *(unsigned char*)(0x5203) /* SPI status register */
#define SPI_DR      *(unsigned char*)(0x5204) /* SPI data register */
#define SPI_CRCPR   *(unsigned char*)(0x5205) /* SPI CRC polynomial register */
#define SPI_RXCRCR  *(unsigned char*)(0x5206) /* SPI Rx CRC register */
#define SPI_TXCRCR  *(unsigned char*)(0x5207) /* SPI Tx CRC register */

#endif /* __STM8S103F_SPI_H */