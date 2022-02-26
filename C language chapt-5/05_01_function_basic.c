#include<stdio.h>
void display();
// // in the second line this is function prototype
int main(){
int a;
printf("Initilizing display function\n");
display();
// // in the seventh line this is function call
printf("Display function finished its work\n");     
     return 0;
     }
     void display(){
          printf("This is display\n");
}