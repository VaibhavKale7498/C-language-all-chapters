// simple program of swaping numbers 
#include<stdio.h>

int main(){
     int x, y;
     printf("Enter value of x");
     scanf("%d",&x);
     printf("Enter value of y");
     scanf("%d",&y);
     int temp=x;
     x=y;
     y=temp;
     printf("After swaping x=%d,y=%d",x,y);

     return 0;
}