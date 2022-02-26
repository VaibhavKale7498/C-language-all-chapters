#include<stdio.h>
int numprint(int);
int main(){
     int n=1;
     printf("print first 50 natural number\n");
     printf("natural numbers are:\n");
     numprint(n);
     return 0;
}
int numprint(int n)
{
     if(n<=50){
          printf("%d\n",n);
          numprint(n+1);
     }
}