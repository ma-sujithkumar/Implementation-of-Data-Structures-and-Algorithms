#include<stdio.h>
int arr[100],choice,i;

void push(int item,int size,int top1,int top2)
{
    if(size==top1+(size-top2)+1)
    printf("Stack underflow");
    else if(choice==1)
    {
        arr[++(top1)]=item;
        printf("\nPushed %d to stack 1\n",item);
    }
    else if(choice==2)
    {
        arr[++(top2)]=item;
        printf("\nPushed %d to stack 2\n",item);
    }
    else
    {
        printf("Invalid choice");
    }
}
void pop(int size,int top1,int top2)
{
    if(choice==1)
    {
        if(top1==-1)
        {
            printf("Stack underflow");
        }
        else
        {
            top1--;
             printf("\nPopped an item from stack 1\n");
            
        }
    }
    else if(choice==2)
    {
        if(top2==size-1)
        {
            printf("Stack underflow");
        }
        else
        {
            top2--;
            printf("\nPopped an item from stack 2\n");
        }
    }
}
void display(int size,int top1,int top2)
{
    printf("1st stack is\n");
    for(i=top1;i<=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n2nd stack is\n");
    for(i=top2;i<=size-1;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void main()
{
    int ope,item,size;
    char ch='y';
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    int top1=-1;
    int top2=size-1;
    do
    {
        printf("Enter an operation\n1.Push\n2.Pop\n3.Display\n");
        scanf("%d",&ope);
        printf("Stack 1/2?\n");
        scanf("%d",&choice);
        switch(ope)
        {
            case 1:
            printf("Enter an item to push to stack %d\n",choice);
            scanf("%d",&item);
            push(item,size,top1,top2);
            break;
            case 2:
            pop(size,top1,top2);
            break;
            case 3:
            display(size,top1,top2);
            break;
            default:
            printf("Invalid choice\n");
            
        }
        printf("Do you wish to continue? y/n\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='y');
}
