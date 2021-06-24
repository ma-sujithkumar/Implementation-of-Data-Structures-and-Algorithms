#include<stdio.h>
void print(n)
{
    if(n==1)
    {
        printf("%d\n",n);
    }
    else
    {
        print(n-1);
        printf("%d\n",n);
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    print(n);
}