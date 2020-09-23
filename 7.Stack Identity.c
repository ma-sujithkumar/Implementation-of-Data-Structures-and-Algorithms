#include<stdio.h>
#define size 7
int i;
void push(int stack[],int item,int* top){
    if(*(top)!=size-1)
    {
        *(top)++;
        stack[*(top)]=item;
    }
    else
    {
        printf("Stack overflow");
    }
    }
int pop(int stack[],int* top)
{
    if(*(top)==-1)
    {
        printf("Stack underflow");
    }
    else
    {
        return stack[*(top)--];
    }
}
void compare(int stack1[],int stack2[],int n1,int n2,int *top1,int* top2)
{
    int flag=1;
    if(n1!=n2)
    {
        printf("Stacks are not equal");
    }
    else
    {
        for(i=0;i<n1;i++)
        {
            if(pop(stack1,top1)!=pop(stack2,top2))
            {
            flag=0;
            break;
            }
        }
        if(flag==0)
        {
            printf("Stacks are not equal");
        }
        else
        {
            printf("Stacks are equal");
        }
    }
}
void main()
{
    int stack1[size],stack2[size];
    int n1,n2,temp;
    int* top1;
    int* top2;
    printf("Enter the no. of elements for stack 1\n");
    scanf("%d",&n1);
    printf("Enter the elements\n");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&temp);
        push(stack1,temp,top1);
    }
    printf("Enter the no. of elements for stack 2\n");
    scanf("%d",&n2);
    printf("Enter the elements\n");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&temp);
        push(stack2,temp,top2);
    }
    compare(stack1,stack2,n1,n2,top1,top2);
    
}