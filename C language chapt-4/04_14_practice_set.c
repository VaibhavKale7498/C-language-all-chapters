#include<stdio.h>

int main(){
     int i=1,sum=0,n=10;
     do{
          sum +=i;
          i++;
     }
     while(i<=n);
     printf("The value of sum is %d",sum);
     return 0;
}
// Well Progress Don