#include <stdio.h>
void main()
{
    int a[100][200],i,j,m=3,n=2,b[100][250],k=0,l=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][l]=i;
                b[k][l+1]=j;
                b[k][l+2]=a[i][j];
                k++;
            }
        }
    }
      for(i=0;i<k;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
