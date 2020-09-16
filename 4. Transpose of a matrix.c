/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int m,n,i,j,sp[100][200],spt[100][200];
    m=3;
    n=2;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&sp[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            spt[i][j]=sp[j][i];
        }
    }
    printf("The original matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",sp[i][j]);
        }
        printf("\n");
    }
    printf("The transposed matrix is\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",spt[i][j]);
        }
        printf("\n");
    }   
}
