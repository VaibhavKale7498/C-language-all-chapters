// // To check number is prime or not
#include <stdio.h>

int main()
{
     // This is not the best meathod to do this program
     int n = 2, i, prime = 1;
     for (i = 2; i < n; i++)
     {
          if (n % i == 0)
          {
               printf("This is not a prime number");
               prime = 1;
               break;
          }
     }
     if (prime==0)
     {
          printf("This is not a prime number");
     }
     else
     {
          printf("This is a prime number");
     }

     return 0;
}