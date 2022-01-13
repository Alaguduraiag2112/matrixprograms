//sum of two matrix
#include<stdio.h>
int a[3][4],b[3][4],c[3][4];
void main()
{
    printf("enter the first matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n enter the second matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("\n add two matrix:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
