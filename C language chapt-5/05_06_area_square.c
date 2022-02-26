// When there is power function only use %f
// because pow is double function
#include <stdio.h>
#include <math.h>
int main()
{
     int a;
     printf("Enter the value of side\n");
     scanf("%d", &a);
     printf("The value of area is %.2f", pow(a, 2));
     return 0;
}