#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,f;
    f=1;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("The factorial value is: %d",f);
    getch();
}
