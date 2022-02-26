#include<stdio.h>

int main(){
     printf("****Multiplication table of 10 in reversed order");
     for(int i=10;i;i--){
          printf("10*%d=%d\n",i,i*10);
     }
     return 0;
}