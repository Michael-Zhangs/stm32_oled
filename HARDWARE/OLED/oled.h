#ifndef __OLED_H
#define __OLED_H			  	 
#include "stm32f10x.h"
#include "stdlib.h"	    
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������V3
//SSD1306 OLED ����IC��������
//������ʽ:8080����/4�ߴ���
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//��������:2015/1/14
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
/*

//OLEDģʽ����
//0: 4�ߴ���ģʽ  ��ģ���BS1��BS2����GND��
//1: ����8080ģʽ ��ģ���BS1��BS2����VCC��
#define OLED_MODE 	1 
		    						  
//---------------------------OLED�˿ڶ���--------------------------  					   
#define OLED_CS  PDout(6)
#define OLED_RST PGout(15) 	
#define OLED_RS  PDout(3)
#define OLED_WR  PGout(14)		  
#define OLED_RD  PGout(13)	   
//PC0~7,��Ϊ������
 
#define DATAOUT(x) GPIO_Write(GPIOC,x);//���  
  
//ʹ��4�ߴ��нӿ�ʱʹ�� 
#define OLED_SCLK PCout(0)
#define OLED_SDIN PCout(1)
*/

#define IIC_SCK_PIN 5
#define IIC_SDA_PIN 6

#define OLED_COLUMN_NUMBER 128
#define OLED_LINE_NUMBER 64
#define OLED_COLUMN_OFFSET 2
#define OLED_PAGE_NUMBER OLED_LINE_NUMBER/8
/**********SPI���ŷ��䣬����oled��������ʵ������޸�*********/

#define IIC_SCK_0  GPIOB->BRR=0X0020       // ����sck�ӿڵ�PB5   ����
#define IIC_SCK_1  GPIOB->BSRR=0X0020       //��λ
#define IIC_SDA_0  GPIOB->BRR=0X0040       // ����SDA�ӿڵ�PB6
#define IIC_SDA_1  GPIOB->BSRR=0X0040

#define OLED_CMD  0	//д����
#define OLED_DATA 1	//д����
//OLED�����ú���
void IO_init(void);
void delay_us(unsigned int _us_time);
void delay_ms(unsigned int _ms_time);
void IIC_write(unsigned char date);
void IIC_start(void);
void IIC_stop(void);
void OLED_send_cmd(unsigned char o_command);
void OLED_send_data(unsigned char o_data);
void SYS_init(unsigned char PLL);


void OLED_WR_Byte(u8 dat,u8 cmd);	    
void OLED_Display_On(void);
void OLED_Display_Off(void);
void OLED_Refresh_Gram(void);  		    
void OLED_Init(void);
void OLED_Clear(void);
void OLED_DrawPoint(u8 x,u8 y,u8 t);
void OLED_Fill(u8 x1,u8 y1,u8 x2,u8 y2,u8 dot);
void OLED_ShowChar(u8 x,u8 y,u8 chr,u8 size,u8 mode);
void OLED_ShowNum(u8 x,u8 y,u32 num,u8 len,u8 size);
void OLED_ShowString(u8 x,u8 y,const u8 *p,u8 size);	 
#endif  
	 







 

