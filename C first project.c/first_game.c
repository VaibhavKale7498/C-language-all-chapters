// // I am very Happy because this is our first game program 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     int number, guess, nguesses = 1;
     srand(time(0));
     number = rand()%100+1;
     // The 7th step generate random number between 1 and 100
     // // printf("The number is %d\n", number);
     // keep running the loop until the number is gussed
     do
     {
          printf("Guess the number between 1 to 100\n");
          scanf("%d", &guess);
          if (guess>number)
          {
               printf("Lower number please\n");
          }
          else if (guess < number)
          {
               printf("Higher number please!\n");
          }
          else
          {
               printf("You gusses it in %d attempts\n", nguesses);
          }
          nguesses++;
     } while (guess!=number);
     return 0;
}