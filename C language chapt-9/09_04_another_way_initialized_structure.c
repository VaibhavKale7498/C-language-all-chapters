#include<stdio.h>
#include<string.h>
struct employee{
     int code;
     float salary;
     char name[20];
};



int main(){
     struct employee vaibhav= {100,34.23,"vaibhav"};
     printf("Code is: %d\n",vaibhav.code);
     printf("salary  is: %f\n",vaibhav.salary);
     printf("Name is: %s\n",vaibhav.name);
     return 0;
}