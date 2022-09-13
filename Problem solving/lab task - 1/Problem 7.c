// A program to calculate the sum of 5 digits.
 #include <stdio.h>

int main()
{
    int a, b, c, d, e, sum;

    printf("Enter a five digit number: ");
    scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);

    sum = a + b + c + d + e;
    printf("The sum is %d\n", sum);


    return 0;
}
