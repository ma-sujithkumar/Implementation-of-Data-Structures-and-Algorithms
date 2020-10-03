#include<stdio.h>
#include<string.h>
#define SIZE 100
int stack[SIZE],top=-1;
void push(char item)
{
    //no overflow
    stack[++top]=item;

}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        top--;
        printf("Popped\n");
 
    }
    
}
void check(char string[])
{
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='(' || string[i]=='{' || string[i]=='[')
        {
        push(string[i]);
        }
        else if(string[i]==')' || string[i]=='}'|| string[i]==']')
        pop();
    }
    if(top==-1)
    {
        printf("Balanced");
    }
    else
    printf("Unbalanced");
}
main()
{
    char string[100];
    printf("Enter the expression");
    scanf("%s",string);
    check(string);
}
