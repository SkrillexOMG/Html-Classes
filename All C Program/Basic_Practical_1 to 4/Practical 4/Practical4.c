#include<stdio.h>
#include<conio.h>
void main()
{
    float c,f;
    printf("Enter The Centigrade Scale Temperature:");
    scanf("%f",&c);
    f=((9*c)/5)+32;
    printf("The Fahrenheit Scale Temperature is= %.2f",f);
    getch();
}
