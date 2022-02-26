// // Passing arary to function to function 
#include<stdio.h>
// void printArray(int *ptr,int n){
//      for(int i=0;i<n;i++){
//           printf("The value of element is %d\n",i+1, *(ptr+1));
//      }
// }
void printArray(int ptr[],int n){
     for(int i=0;i<n;i++){
          printf("The value of element is %d\n",i+1, ptr[i]);
     }
     ptr[2]= 5555;
     // in line 12 This value will be change in arr array of  main as well
}
int main(){
     int arr[]= {1,2,3,4,5,6,7};
     printArray(arr,7);
     printf("%d",arr[2]);
     return 0;
}                          