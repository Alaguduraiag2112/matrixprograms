//Mutiplication of Matrix in C language
#include<stdio.h>
int a[3][3],b[3][3],c[3][3];
int sum=0;
void main()
{
    int i,j,k;
    int row1,row2;
    int col1,col2;
    printf("\n enter the row of matrix1:\n");
    scanf("%d",&row1);
    printf("enter the col of matrix1:\n");
    scanf("%d",&col1);
    printf("enter the row2 of matrix2:");
    scanf("%d",&row2);
    printf("enter the col2 of matrix 2:\n");
    scanf("%d",&col2);
    if(col1!=row2)
    {
        printf("\n cannot multiply matrix:\n");
    }

    printf("enter the first matrix1:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("enter the second matrix2:\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            sum=0;
            for(k=0;k<row1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }
    printf("\n Multiply Matrix is:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    
}