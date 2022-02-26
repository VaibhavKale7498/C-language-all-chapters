#include<stdio.h>

int main(){
     int a,b;
     printf("Enter the value of a and b\n");
     scanf("%d %d",&a, &b);
     int temp = a;
     a=b;
     b=temp;
     printf("After swapping a=%d and b = %d\n", a, b);
     return 0;
}