//A program to obtain the sum of the first and last digit of 4 number.
#include<stdio.h>
int main(){
    int n,num1,num2,num3,num4,sum;
    printf("Enter your four digit number: ");
    scanf("%d", &n);

    num1 = n % 10;
    num4=(n/1000) %10;
    sum = num1 + num4;


    printf("The sum of first and last digit: %d" , sum);

return 0;
}
