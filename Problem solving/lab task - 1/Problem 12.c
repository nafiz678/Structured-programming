/*
If the total selling price of 15 items and the total profit earned on them is input through the
keyboard, write a program to find the cost price of one item
*/
#include<stdio.h>
int main(){
    float total_p;
    float profit_p;
    float cost_p;

    printf("Enter total price: ");
    scanf("%f" , &total_p);

    printf("Enter profit price: ");
    scanf("%f" , &profit_p);

    cost_p = (total_p - profit_p)/15;

    printf("The cost price of one item: %.2f" , cost_p);




return 0;
}
