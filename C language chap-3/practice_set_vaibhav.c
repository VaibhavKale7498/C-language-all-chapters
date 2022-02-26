#include <stdio.h>

int main()
{
     int grade,A,B,C,D;
     

     printf("Enter your marks(60-100)\n");
     scanf("%d", &grade);
     switch (grade)
     {
     case 90:
          printf("Your grade is A\n");
          break;
     case 80:
          printf("Your grade is B\n");
          break;
     case 70:
          printf("Your grade is C\n");
          break;
     case 60:
          printf("Your grade is D\n");
          break;
     default:
          printf("You are pass");
     }
     return 0;
}