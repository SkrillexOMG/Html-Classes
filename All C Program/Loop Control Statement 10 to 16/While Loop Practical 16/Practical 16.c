#include <stdio.h>
#include <conio.h>
void main()
{
    int i=1,s=0,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i*(i+1);
        i++;
    }
    printf("The result is: %d",s);
    getch();

}
