#include "main.h"

extern char* send_str;
extern char* receive_str;
extern uint32_t cnt;

extern char buffer_uart[10];
extern char*p;
extern uint8_t index;
extern void reset_buffer();

#pragma vector=2+9
__interrupt void EXTI_Line_1(void){
    if(!gbi(GPIOC->IDR,1)){
    cnt ++;
    tbi(GPIOE->ODR,7);
    usart_send_string("HELLO");
    lcd_clear();
    reset_buffer();
  }
  sbi(EXTI->SR1,1);
}

#pragma vector=2+28
__interrupt void USART_receive(void){
  if(gbi(USART1->SR,5)){
    buffer_uart[index] = USART1->DR;
    lcd_print_string(buffer_uart,2);
    index++;
    if(index>=10) index = 0;
  }
}