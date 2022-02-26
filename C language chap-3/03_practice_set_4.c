// // Program to check a year is leap year or not
#include <stdio.h>

int main()
{
     int year;
     printf("Enter a year");
     scanf("%d", &year);
     // // Leap year if it is perfectly  divisible by 400

     if (year%400==0)
     {
          printf("%d year is leap year\n",year);
     }
     // // Not a leap year if it is perfectly divisible by 100           
     else if(year%100==0)
     {
          printf("%d is not a leap year\n",year);
     }
     // // Leap year if not divisible by 100
     // But divisible by 4`
     else if(year%4==0)
     {
          printf("%d is leap year\n",year);

     }
     // // All other years are not leap years
     else{
          printf("%d is not a leap year",year);
     }

     
     return 0;
}