// This program will show a person gross salary

#include<stdio.h>
int main() {
   int gross_salary;
   int basic_salary;
   int da;
   int hr;
   printf("Enter basic salary: ");
   scanf("%d", &basic_salary);

   da=(40 *basic_salary) /100;
   hr=(20*basic_salary) /100;
   gross_salary=basic_salary+da+hr;

   printf("\nGross salary: %d", gross_salary);


   return (0);
}
