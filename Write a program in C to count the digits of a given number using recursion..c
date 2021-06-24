#include<stdio.h>
int count(int c)
{
    static int i=0;
    if(c==0)
    return 0;
    else
    {
        i++;
        count(c/10);
    }
    return i;
}
void main()
{
    int c=3453;
    printf("%d\n",count(c));
}