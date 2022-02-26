// write a program to convert celsius temperature into fahrenheit
#include<stdio.h>

int main(){
     float celsius,temperature;
     printf("Enter the value of temperature");
     scanf("%f",&celsius);
      temperature = (celsius * 9/5)+32;
     printf("The value of your celsius temperature  into fahrenheit %f",temperature);
     return 0;
}