#include <stdio.h>

int main()
{
     int mark[4];
     // allocate space for 4 integers
//      Note that mark[0] is act as a variable just like a, b , c, d  ;

    printf("Enter the value of marks for student 1\n:");
    scanf("%d",&mark[0]);
     printf("Enter the value of marks for student 2\n:");
     scanf("%d", &mark[1]);
     printf("Enter the value of marks for student 3\n:");
     scanf("%d", &mark[2]);
     printf("Enter the value of marks for student 4\n:");
     scanf("%d", &mark[3]);

     printf("You have entered %d %d %d and %d\n",mark[0],
             mark[1], mark[2], mark[3]);
     return 0;
}