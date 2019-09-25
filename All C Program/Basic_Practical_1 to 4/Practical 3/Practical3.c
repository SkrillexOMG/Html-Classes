#include<stdio.h>
#include<conio.h>
void main()
{
    float r,area;
    printf("Enter the Radius:");
    scanf("%f",&r);
    area=3.1416*r*r;
    printf("The Circle is: %.2f",area);
    getch();
}
