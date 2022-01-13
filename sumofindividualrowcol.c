//sum of individual row and coloumn
#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,sr=0,sc=0;
    printf("enter the matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("sum of individual row and col:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("sr=%d ,sc=%d ",sr,sc);
    }
}