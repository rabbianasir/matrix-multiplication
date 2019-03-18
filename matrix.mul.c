#include<stdio.h>
int main()
{
    int mat1[10][10],i,j,k,mat2[10][10],ans[10][10],r1,c1,r2,c2;
    printf("enter no. of rows and column of first matrix:");
    scanf("%d %d",&r1,&c1);
    printf("enter no. of rows and column of second matrix:");
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r1;i++)
    {
        printf("enter the elements of first row in first matrix:");
        for(j=0;j<c1;j++)
            scanf("%d",&mat1[i][j]);
    }
    for(i=0;i<r2;i++)
    {
        printf("enter the elements of first row in second matrix:");
        for(j=0;j<c2;j++)
            scanf("%d",&mat2[i][j]);
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            ans[i][j]=0;
            for(k=0;k<c1;k++)
            ans[i][j]+=mat1[i][k]*mat2[k][j];

        }
    }
    puts("ANSWER AFTER MULTIPLICATION OF MATRIX:");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
            printf("%d\t",ans[i][j]);
         printf("\n");
    }
}
