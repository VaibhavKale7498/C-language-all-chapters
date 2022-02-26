// To count the occrence of character in the string 
#include<stdio.h>
int occurence(char st[],char c){
     char*ptr= st;
     int count=0;
     while(*ptr!='\0'){
          if (*ptr==c){
               count++;
          }
          ptr++;
     }
     return count;
}
int main(){
     char st[] = "Vaibhav";
     int count = occurence(st,'r');
     printf("Occurances = %d",count);
     
     return 0;
}