#include<stdio.h>
#include<conio.h>
void main()
{
    int x,a,b,c;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Enter Third Number:");
    scanf("%d",&c);
    x=a;
    if(x<b)
    {
        x=b;
    }

    if(x<c)
        x=c;
    printf("The Largest Number is= %d",x);
    getch();

}
