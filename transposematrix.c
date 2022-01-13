//transpoce of given matrix
#include<stdio.h>
int b[3][4];
void main(){
    int i,j;
    int row1,col1;
    printf("enter the rowl:");
    scanf("%d",&row1);
    printf("\nenter the coloumn:");
    scanf("%d",&col1);
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n matrix is:\n");
       for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        printf("\n transpose of matrix:\n");
       for(i=0;i<col1;i++)
        {
            for(j=0;j<row1;j++)
            {
                printf("%d\t",b[j][i]);
            }
            printf("\n");
        }
}

