//A program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.

#include <stdio.h>

int main()
{
    float pi=3.1416;
    float rectlength;
    float rectbreadth;
    float circleradius;
    float rectarea;
    float rectperimeter;
    float circlearea;
    float circlecircumference;

    printf("Enter rectangle length: ");
    scanf("%f", &rectlength);

    printf("Enter rectangle length: ");
    scanf("%f", &rectbreadth);

    printf("Enter rectangle length: ");
    scanf("%f", &circleradius);

     rectarea = rectlength +rectbreadth;
     rectperimeter= 2*(rectlength +rectbreadth);
     circlearea = pi * circleradius * circleradius;
     circlecircumference=2*pi*circleradius;

     printf("\nThe area of rectangle is: %f" ,rectarea);
     printf("\nThe perimeter of rectangle is: %f",rectperimeter);
     printf("\nThe area of a circle is : %f",circlearea);
     printf("\nThe circumference of a circle is: %f" ,circlecircumference);


    return 0;
}
