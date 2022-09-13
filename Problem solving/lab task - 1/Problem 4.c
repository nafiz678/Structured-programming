#include<stdio.h>
int main() {
    float centigrade;
    float ferhanite;

    printf("Enter the temperature in ferhanite: ");
    scanf("%f",&ferhanite);


    centigrade = (ferhanite - 32) * 5 / 9;
    printf("Centigrade degree: %f celsius" ,centigrade);


    return 0;
}
