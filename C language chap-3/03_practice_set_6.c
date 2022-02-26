// // // Write a program to check the number is lower case or not

#include<stdio.h>

int main(){
     // 97-122=a-z ASCII Values
     char ch;
     printf("Enter the charcter\n");
     scanf("%c",&ch);
     if(ch<=122 && ch>=97){
          printf("It is lowercase");
          }
          else{
               printf("It is not lowercase");
          }
     return 0;
}