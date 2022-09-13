//A program to interchange the contents of C and D

#include<stdio.h>
int main() {
    int C;
    int D;

    printf("Enter your first number C: ");
    scanf("%d", &C);

    printf("Enter your second number D: ");
    scanf("%d", &D);

    C=D;
    D=C;

    printf("After interchanging C=%d", C);
    printf("\nAfter interchanging D=%d", D);


return 0;

}
