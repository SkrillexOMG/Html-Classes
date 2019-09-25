#include <stdio.h>
#include <conio.h>
void main()
{
    int i,s=0,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2)
    {
        s=s+i*i;
    }
    printf("The result is: %d",s);
    getch();

}
