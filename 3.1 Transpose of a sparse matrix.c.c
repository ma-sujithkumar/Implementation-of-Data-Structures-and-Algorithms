#include <stdio.h>
void display(int m,int a[][100])
{
    for(int i=0;i<m;i++)
    {
        printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
    }
}
int main()
{
    int m,a[100][100],temp,i,j;
   printf("Enter the no. of non zero elements\n");
   scanf("%d",&m);
   printf("Enter the row index/column index/element");
   for(i=0;i<m;i++)
   {
           scanf("%d\n%d\n%d\n",&a[i][0],&a[i][1],&a[i][2]);
   }
   printf("The matrix is");
   display(m,a);
   for(i=0;i<m;i++)
   {
           temp=a[i][0];
           a[i][0]=a[i][1];
           a[i][1]=temp;
   }
   //sorting
   for(i=0;i<m;i++)
   {
       if(a[i][0]>a[i+1][0] && a[i+1][2]!=0)
       {
           for(j=0;j<3;j++)
           {
               temp=a[i][j];
           a[i][j]=a[i+1][j];
           a[i+1][j]=temp;
           }
       }
       else if(a[i][0]==a[i+1][0] && a[i][1]>a[i+1][1] && a[i+1][2]!=0)
       {
             for(j=0;j<3;j++)
           {
               temp=a[i][j];
           a[i][j]=a[i+1][j];
           a[i+1][j]=temp;
           }
       }
   }
printf("The transposed matrix is");
   display(m,a);
}
