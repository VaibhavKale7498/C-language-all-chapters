// // Write a c program to find greatest of 4 numbers
#include <stdio.h>

int main()
{
     int a, b, c, d;
     printf("Enter your number\n");
     scanf("%d %d %d %d", &a, &b, &c, &d);
     if (a > b)
     {
          printf("%d is bigger");
     }
     if (a > c)
     {
          printf("%d is bigger");
     }
     if (a > d)
     {
          printf("%d is bigger");
     }

     else if (b > c)
     {
          printf("%d is bigger", b);
     }
     else if (b > d)
     {
          printf("%d is bigger", b);
     }
     else if (c > d)
     {
          printf("%d is bigger", c);
     }
     else
     {
          printf("%d is big", d);
     }

     return 0;
}