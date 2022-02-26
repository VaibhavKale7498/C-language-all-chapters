#include<stdio.h>

int main(){
     int i=34;
     int *j = &i; 
     // // j will not store the address of i , in fifth line
     printf("The value of i is %d\n",i);
     printf("The value of i is %d\n",*j);
printf("The address of i is %u\n",&i);
printf("The address of i is %u\n",j);      
printf("The address of j is %u\n",&j);

     return 0;
}
