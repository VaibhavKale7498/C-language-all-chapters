// Most important code of operator precendence 
#include<stdio.h>

int main(){
     int x= 2;
     int y= 3;
     printf("The value of 3*x-8*y is %d\n",3*x- 8*y);
          printf("The value of 3*x-8*y is %d\n",3*(x- 8*y));           
     // operators of higher priority are evaluated first in absence of parenthesis
     // but if parenthesis is presen then first priority is to parenthesis meance in 7th statment
        printf("The value of 8*y/3*x is %d\n",8*y/ 3*x);  
     //    8*3 / 3*x = will give wrong answer that is 16
     // 24/3*2
     // 8*2
     // 16
     return 0;
}
