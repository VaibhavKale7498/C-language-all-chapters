#include<stdio.h>
int main (){
     int a,n=1000,sum=0;
     printf("Enter the number\n");
     scanf("%d",&n);
     for(a=0;a<=n;a+=2){
    sum=sum+a;
     }
     printf("The sum of even numbers are %d\n",sum); 

     return 0;
}