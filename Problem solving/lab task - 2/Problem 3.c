// A program to determine the youngest of two people

#include<stdio.h>
int main(){
    int arif;
    int joy;
    printf("Enter the age of Arif: ");
    scanf("%d", &arif);
    printf("Enter the age of Joy: ");\
    scanf("%d", &joy);

    if (arif>joy){
        printf("Arif is youngest");
    }
    else {
        printf("Joy is youngest");
    }
return 0;

}
