#include<stdio.h>

int main(){
     int i=1,sum=0,n=10;
     while(i<=n){
          sum +=i;
          i++;
     }
     printf("sum of natural numbers are %d",sum);
     return 0;
}