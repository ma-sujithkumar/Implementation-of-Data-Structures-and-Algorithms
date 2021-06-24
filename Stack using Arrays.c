#include<stdio.h>
int top=-1;
int arr[100];
void push(int ele)
{
    arr[++top]=ele;
}
int pop()
{
    return arr[top--];
}
void display(int temp)
{
    if(temp==-1)
    return;
    printf("%d\n",pop());
    display(--temp);
}
void main()
{
    push(10);
    push(20);
    push(30);
    display(top);
}