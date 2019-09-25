// 1+2+3+.....+100 porjonto dharar jogfol nirnoy
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,s=0;
    printf("Sum of 1 to 100 is given below...");
    for(i=1;i<=100;i=i+1)
    {
        s=s+i;
    }
    printf("\n The result is=%d",s);
    getch();
}
