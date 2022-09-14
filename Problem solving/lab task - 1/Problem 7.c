// A program to calculate the sum of 5 digits.
 #include <stdio.h>

int main()
{
    int n, a, b, c, d, e, sum;

    printf("Enter your five digit number: ");
    scanf("%d", &n);

    a=n%10;
    b=(n/10) %10;
    c=(n/100) %10;
    d=(n/1000) %10;
    e=(n/10000) %10;

    sum= a+b+c+d+e;
    printf("The sum of five number is: %d", sum);




    return 0;
}
