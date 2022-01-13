//sum f 2D array

#include<stdio.h>
void main()
{
    int a[3][3];
    int i,j,sum=0;
    printf("\n Enter the elements 2D array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n%d ",a[i][j]);
            sum+=a[i][j];
        }
        printf("\n");

    }
    printf("\n sum of 2D array:%d",sum);
}
