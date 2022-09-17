// A program to reverse the number.
 #include <stdio.h>

int main()
{
    int n,num1,num2,num3,num4,num5,reverse;

    printf("Enter your 5 digit number: ");
    scanf("%d", &n);

    num1=n%10;
    num2=(n/10) %10;
    num3=(n/100) %10;
    num4=(n/1000) %10;
    num5=(n/10000) %10;

    printf("The reverse numbers are: %d%d%d%d%d" ,num1,num2, num3, num4, num5 );


    return 0;
}
