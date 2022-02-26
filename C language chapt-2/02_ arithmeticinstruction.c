#include <stdio.h>
#include<math.h>
// power function meance 4^5
int main()
{
  int a = 4;
  int b = 8;
  int z = b * a;
  // b * a = z illegal or error
  // z = b * a leagle means no error
  printf("The value of a + b is: %d\n", a + b);
  printf("The value of a - b is: %d\n", a - b);
  printf("The value of a * b is: %d\n", a * b);
  printf("The value of b / a is: %d\n", b / a);
printf("5 when dived by 2 leaves a reminder of %d\n",5%2);
printf("The value of 4 to the power 5 is %f\n",pow(4, 5));
printf("The value of 6 +5 is %d\n",6+5);
printf("The value of 6 +5.6 is %f\n",6+5.6);
printf("The value of 5/2 is %d\n",5/2);
printf("The value of 3.0/9 is %f\n",3.0/9);
  return 0;
}