//A program to check whether a triangle is valid or not

#include<stdio.h>
int main(){
    int angle_1;
    int angle_2;
    int angle_3;
    printf("Enter the first angle: ");
scanf("%d", &angle_1);
 printf("Enter the second angle: ");
scanf("%d", &angle_2);
 printf("Enter the third angle: ");
scanf("%d", &angle_3);

if (angle_1+angle_2+angle_3==180){
    printf("Triangle is valid");
}
else {
    printf("Triangle is not valid");
}
return 0;
}
