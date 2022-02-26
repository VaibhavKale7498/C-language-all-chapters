// Mostely we uses call by referance according to c community
#include<stdio.h>
void  wrong_swap(int *a,int *b);
void swap(int *a, int *b);         
int main(){
     int x=3,y=4;
     printf("The value of x and y befor swap is %d and %d\n",x,y);
    // wrong_swap(x,y);
     // in line 7 will not work due to call by value
     swap(&x,&y);
     // in line 9 will work due to call by reference
    printf("The value of x and y after swap is %d and %d\n",x,y);
     printf("The value of x and y is %d and %d\n",x,y);
     return 0;
}

void wrong_swap(int *a,int *b){
     int temp;
     temp=a;
     a=b;
     
     b=temp;
}
void swap(int *a,int *b){
    int temp;
     temp=*a;
     *a=*b;
     *b=temp;
}