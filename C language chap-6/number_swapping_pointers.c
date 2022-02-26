#include <stdio.h>

int main()
{
     int x, y, *a, *b, temp;
     printf("Enter the value of x : ");
     scanf("%d", &x);
     printf("Enter the value of y : ");
     scanf("%d", &y);

     printf("Befor swapping x and y\n", x, y);

     a = &x;
     b = &y;
     temp = *b;
     *b = *a;
     *a = temp;
     printf("After swapping x=%d and y = %d\n", x, y);
     return 0;
}