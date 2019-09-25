#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,x=0,y=0;
    for(i=0;i<5;i++)
    {
        printf("\n Enter the number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>0)
            x++;
        else
            y++;
    }
    printf("\nTotal positive numbers: %d",x);
    printf("\nTotal negative numbers: %d",y);
    getch();
}
