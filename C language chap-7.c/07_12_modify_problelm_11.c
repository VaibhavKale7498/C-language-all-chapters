#include<stdio.h>

int main(){
     int mul[10],i,n;
     printf("Enter the value of i");
     scanf("%d",&n);
     for(i=0;i<10;i++){
          mul[i] = n*(i+1);
     }
     for(i=0;i<10;i++){
          printf("n*%d=%d\n",i+1,mul[i]);
     }
     return 0;
}
// Timepass Program made by Vaibhav1