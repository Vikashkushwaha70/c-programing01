// Write a C program for matrix multiplication.

#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],c[100][100],i,j,k,r1,r2,c1,c2;

    printf("Matrix 1\n");
    printf("Number of rows: ");
    scanf("%d",&r1);
    printf("Number of columns: ");
    scanf("%d",&c1);
    printf("The array elements:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix 2\n");
    printf("Number of rows: ");
    scanf("%d",&r2);
    printf("Number of columns: ");
    scanf("%d",&c2);
    printf("The array elements:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
        scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2)
    {
        printf("Multiplication of the two matrices is possible.\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            { c[i][j]=0;
                for(k=0;k<c1;k++)
                {
                c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("The Output matrix is:\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                printf("%d ",c[i][j]);
                if(j==c2-1)
                {
                    printf("\n");
                }
            }
        }
    }
    else
    {
        printf("Multiplication of two matrices is not possible.");
    }
    return 0;
}