#include <stdio.h>
#include <string.h>

struct employee
{
     int code;
     float salary;
     char name[10];
};
int main(){

     struct employee facebook[100];
     facebook[0]. code = 100;
     facebook[0].salary = 10.45;
          strcpy(facebook[0].name,"vaibhav");

          facebook[1]. code = 100;
          facebook[1]. salary = 107.45;
          strcpy(facebook[1].name,"Rohan");

          facebook[2]. code = 100;
          facebook[2]. salary = 10.45;
          strcpy(facebook[2].name,"Mohit");

printf("Done\n");
return 0;
}