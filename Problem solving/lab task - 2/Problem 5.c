//A program to check if the area of the triangle is greater than the perimeter of the triangle.
#include<stdio.h>
int main(){
    float x,y,z,p;

    printf("Enter the first number: ");
    scanf("%f", &x);
    printf("Enter the second number: ");
    scanf("%f", &y);
    printf("Enter the third number: ");
    scanf("%f", &z);

    if (x<(y+z) && y<(x+z) && z<(x+y))
    {
        p=x+y+z;
        printf("The area of the triangle is not greater than the perimeter");
    }
     else {
        printf("The area of the triangle is greater than the perimeter");
     }

return 0;
}
