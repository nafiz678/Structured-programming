//A program to determine whether a number is Zero or not.
#include<stdio.h>
int main(){
int number;
printf("Enter a number: ");
scanf("%d", &number);

if(number==0){
    printf("Entered number is Zero");
}else{
    printf("Entered Number is not Zero");
}
return 0;
}
