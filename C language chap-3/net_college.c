// C program to cheak factorial number
#include<stdio.h>
int find_factorial(int);
int main()
{
     int num, fact;
     // Ask user for the input and store
     printf("Enter the value of integer number\n");
     scanf("%d", &num);
     // Calling our user defined function
     fact =find_factorial(num);
     // Displaying factorial of input number 
     printf("factorial of %d is:%d\n",num, fact);
     return 0;
}
int find_factorial (int n)
{
     // Factorial of 0 is 1
     if (n==0)
     return(1);
     // Function calling itself:recursion
     return(n*find_factorial(n-1));
     
}


