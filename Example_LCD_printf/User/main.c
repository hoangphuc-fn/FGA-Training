#include "main.h"
int16_t cnt = -6;
void delay(uint32_t time); 
void main(void){
  /*!< Init User Button (PC1) with interrupt*/
  config_Ubtn();
  /*!< Init LCD */
  config_LCDvsRTC();
  __enable_interrupt();
  while(1){
     LCD_reset();
     LCD_printf("char %c",'L');
     delay(60000);
     LCD_reset();
     LCD_printf("char %c",'H');
     delay(60000);
     LCD_reset();
     LCD_printf("char %c",'P');
     delay(60000);
     LCD_reset();
     LCD_printf("%s","LE");
     delay(60000);
     LCD_reset();
     LCD_printf("%s","HOANG");
     delay(60000);
     LCD_reset();
     LCD_printf("%s","PHUC");
     delay(60000);
     LCD_reset();
     LCD_printf("hex %x", 30);
     delay(60000);
     LCD_reset();
     LCD_printf("oct %o", 30);
     delay(60000);
     LCD_reset();
     LCD_printf("int %d", 30);
     delay(60000);
     LCD_reset();
     LCD_printf("int%d", -30);
     delay(60000);
  }
}
void delay(uint32_t time){
  while(time--);
}