//1+3+5+....+N sonkhyk dharar jogfol nirnoy
#include <stdio.h>
#include <conio.h>
void main()
{
    /*int i,s=0,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("The result is: %d",s);*/

    /*int i,s=0,n;
    i=1;
    printf("Enter the value of n=");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i+=2;
    }
    printf("The result is: %d",s);*/
    int i,s=0,n;
    i=1;
    printf("Enter the value of n=");
    scanf("%d",&n);
    do
    {
        s=s+i;
        i+=2;

    }while(i<=n);
    printf("The result is: %d",s);
    getch();

}

