//This program will show distance into meter,feet,inches, centimeters.

#include<stdio.h>
int main(){
    int km;
    int m;
    int f;
    int in;
    int ce;
    printf("Enter Your Distance in km: ");
    scanf("%d", &km);

    m=km*1000;
    f=km*3280;
    in=km*39370;
    ce=km*100000;

    printf("\n%d km = %d meters", km ,m);
    printf("\n%d km = %d feets", km ,f);
    printf("\n%d km = %d inches", km ,in);
    printf("\n%d km = %d centimeters", km ,ce);
return 0;
}
