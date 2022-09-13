//A program to determine whether a number is negative or not
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >=0){
        printf("Number is not negative");
    }
    else{
        printf("Number is negative");
    }

return 0;
}
