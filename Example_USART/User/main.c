#include "main.h"
uint32_t cnt = 0;
char* send_str ;
char* receive_str;
void delay(uint32_t time);

char buffer_uart[10];
uint8_t index = 0;

void main(void){
  config_Ubtn();
  config_usart();
  config_LCDvsRTC();
  __enable_interrupt();
  while(1){

  }
}
void delay(uint32_t time){
  while(time--);
}
void reset_buffer(){
  for(uint8_t i = 0; i<10; i++){
    buffer_uart[i] = 0;
  }
  index = 0;
}
