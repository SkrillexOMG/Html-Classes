#include <stdio.h>
#include <conio.h>
void main()
{
    int c,s=0,n;
    printf("Enter the value of n=");
    scanf("%d",&n);
    for(c=1;c<=n;c=c+2)
    {
        s=s+c;
    }
    printf("The result is: %d",s);
    getch();

}

