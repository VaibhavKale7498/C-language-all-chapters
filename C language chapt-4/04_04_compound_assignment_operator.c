#include<stdio.h>
int main(){
     int i=5;
     printf("The value after  i++ is %d\n",++i);
     i+=10;
     printf("The value after i is %d\n",i);
      
     return 0;
}
// //  i++; ----> first print then increment
// // ++i;----> first increment then printf
// += is a compound assignment operator