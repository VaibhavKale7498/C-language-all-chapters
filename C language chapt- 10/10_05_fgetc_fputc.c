#include <stdio.h>

int main()
{
     FILE *ptr;
     // ptr = fopen("getcdemo.txt", "r");
     // char c = fgetc(ptr)fgetc(ptr)
     // fgetc demo for reading a file
     // printf("The value of my character is %c\n", fgetc(ptr));
     // printf("The value of my character is %c\n", fgetc(ptr));
     // printf("The value of my character is %c\n", fgetc(ptr));
     // printf("The value of my character is %c\n", fgetc(ptr));
     // printf("The value of my character is %c\n", fgetc(ptr));
     ptr = fopen("putcdemo.txt", "w");
     putc( 'c',ptr);
      putc( 'c',ptr);
       putc( 'c',ptr);
     fclose(ptr);

     return 0;
}