#include<stdio.h>
// Sum is a function which takes a and b as 
// input and returns an integer as an output
int sum(int a,int b);
// in the line 4 this is function prototype deleration  
int main(){
     int c;
 c=sum(2,15); 
// in line 7 this is function call
printf("The value of c is %d\n",c);
return 0;
}

int sum(int a ,int b){
     int c;
     c = a+b;
     return c;
}