// Write a program to read 3 integers using file
#include<stdio.h>

int main(){
     int a,b,c;
     FILE *ptr;
     ptr = fopen("pr01.txt","r");
     fscanf(ptr,"%d %d %d",&a,&b,&c);
     printf("The values of a b and c are %d %d %d\n", a,b,c);
     return 0;
}