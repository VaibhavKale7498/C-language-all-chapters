// What will the following line produce in a c program 
// printf("%d%d%d\n",a,++a,a++)
#include<stdio.h>

int main(){
     int a=3;
     printf("%d%d%d\n",a,++a,a++);
     // The output of this program is 553 because in the gcc compiler 
     // arguments pass in the printf are from right to left
     // behaviour of every compiler is different because there are different manufacture of compiler 
     // and they design compiler in different different  behaviour
     return 0;
}