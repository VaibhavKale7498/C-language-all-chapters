#include<stdio.h>
int main(){
     FILE *ptr;
     ptr = fopen("sample .txt","r"); 
     // in 4th line ---> for reading the file 
     ptr = fopen("sample .txt","w"); 
     // in 6th line --->for writing the file
     return 0;
}