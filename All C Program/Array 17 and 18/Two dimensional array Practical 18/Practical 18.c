#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,numberOfRows,numberOfCols;
    int a[10][10],b[10][10],c[10][10];

    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&numberOfRows,&numberOfCols);

    //scan a matrix
    printf("Enter elements for (a) matrix:\n");
        for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("a[%d][%d]= ",i,j);// ekhane ami row and coloumn er value gula assign kora dekhte chachi.
            scanf("%d",&a[i][j]);
        }
        printf("\n");// ei new line ta daoa hoyeche prottekti row ke alada korar jonno.
    }
    //print a matrix
    printf("a= ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    // scan b matrix
        printf("\nEnter elements for (b) matrix:\n");
        for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("b[%d][%d]= ",i,j);// ekhane ami row and coloumn er value gula assign kora dekhte chachi.
            scanf("%d",&b[i][j]);
        }
        printf("\n");// ei new line ta daoa hoyeche prottekti row ke alada korar jonno.
    }
    // print b matrix
    printf("b= ");
    for(i=0;i<numberOfRows;i++)
    {
        printf("\t");
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    // Add two matrix
        for(i=0;i<numberOfRows;i++)
    {

        for(j=0;j<numberOfCols;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }

    }
    // print the addition of two matrix
    printf("\n a + b= ");
    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    getch();
}
