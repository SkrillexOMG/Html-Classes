//N er jekono man input dile sei porjonto even number nirnoy kore dekhano
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("\n %d",i);
    }
    getch();
}
