#include <stdio.h>

int main()
{
     int Physics, Chemistry, Maths;
     float Total;
     printf("Enter Physics marks\n");
     scanf("%d", &Physics);
     printf("Enter Chemistry marks\n");
     scanf("%d", &Chemistry);
     printf("Enter Maths marks\n");
     scanf("%d", &Maths);
     Total = (Physics + Chemistry + Maths) / 3;
     if ((Total < 40) || Physics < 33 || Maths < 33 || Chemistry < 33)
     {
          printf("Your total percentage is %f and you are failed\n", Total);
     }
     else
     {
      printf("Your total percentage is %f and your are pass\n", Total);
     }

     return 0;
}