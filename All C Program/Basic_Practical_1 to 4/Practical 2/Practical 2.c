#include <stdio.h>
#include <conio.h>
void main()
{
    float b,h,area;
    printf("Enter the Base: ");
    scanf("%f",&b);

    printf("Enter the Height: ");
    scanf("%f",&h);

    area=(b*h)/2;
    printf("The area of the triangle is= %.2f",area);

    getch();

}
