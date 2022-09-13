//A program to determine whether a number is positive or not.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >=0){
        printf("Number is positive");
    }
    else{
        printf("Number is not positive");
    }
return 0;
}
