#include <main.h>

extern int cnt;

#pragma vector=2+9
__interrupt void EXTI_Line_1(void){
    if(!gbi(GPIOC->IDR,1)){
    cnt ++;
    tbi(GPIOE->ODR,7);
    tbi(GPIOC->ODR,7);
    LCD_printf("%d",cnt);  
  }
  sbi(EXTI->SR1,1);
}