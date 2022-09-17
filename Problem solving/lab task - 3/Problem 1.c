// This program that can decide whether the number is positive, negative or neutral.
#include<stdio.h>
int main () {
    int a;

    printf("Enter the number you want to check: ");
    scanf("%d", &a);

    if (a > 0){
        printf("The number is positive.");
    }
    else if (a < 0){
        printf("The number is negative.");
    }
    else {
        printf("The number is neutral.");
    }

return 0;
}
