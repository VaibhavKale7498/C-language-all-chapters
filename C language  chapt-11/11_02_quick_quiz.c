// Do same program for float data type
#include<stdio.h>
#include<stdlib.h>

int main(){
     float *ptr;
     // printf("The size of int in my pc is %d\n",sizeof(int));
     //   printf("The size of float in my pc is %d\n",sizeof(float));
     //     printf("The size of char in my pc is %d\n",sizeof(char));
     ptr = (float *) malloc(6*, sizeof(float));
     for(float i=0;i<6;i++){
          printf("Enter the value of %f element \n", i);
          scanf("%f",&ptr[i]);
     }


     for(float i=0;i<6;i++){
          printf("The value of %f element is %f\n",i,ptr[i]);
     }
     return 0;
}