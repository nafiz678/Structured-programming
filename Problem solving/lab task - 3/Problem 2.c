//A program to display a menu in a restaurant and input user choice.
#include<stdio.h>
int main (){
    int a;

    printf(" Food Menu\n 1.Fish\n 2.Rice\n 3.Chicken\n 4.Pizza\n 5.Soft Drink \n Enter your choice: ");
    scanf("%d", &a);


    if (a==1){
        printf("You choose Fish");
    }
    else if(a==2){
        printf("You choose Rice");
    }
     else if(a==2){
        printf("You choose Rice");
    }
    else if(a==3){
        printf("You choose Chicken");
    }
    else if(a==4){
        printf("You choose Pizza");
    }
    else if(a==5){
        printf("You choose Soft Drink");
    }
    else {
        printf("Out of menu");
    }
return 0;
}
