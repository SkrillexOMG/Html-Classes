#include<stdio.h>
#include<conio.h>
void main()
{
    float x,y,z,sum,avg;

    printf("Enter first number: ");
    scanf("%f",&x);

    printf("Enter second number: ");
    scanf("%f",&y);

    printf("Enter third number: ");
    scanf("%f",&z);

    sum=x+y+z;
    avg=sum/3;

    printf("The Sum is: %.2f\n",sum);
    printf("The Average is: %.2f\n",avg);

    getch();

}
