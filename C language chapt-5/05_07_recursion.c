#include <stdio.h>
int factorial(int x);
int main()
{
     int a = 5;
     printf("The value of factorial %d is %d", a, factorial(a));
     return 0;
}

int factorial(int x)
{
     printf("Callin factorial (%d)\n", x);
     if (x == 1 || x == 0)
     {
          return 1;
          // // in the 15 line there is base conditions
     }
     else
     
     {
          return x * factorial(x - 1);
     }                                                                                                                                       
}