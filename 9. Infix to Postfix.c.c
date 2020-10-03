#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100
char arr[SIZE];
int top=-1;
void push(char item)
{
    if(top==SIZE-1)
    printf("Stack Overflow");
    else
    {
        arr[++top]=item;
        printf("Pushed %c\n",item);
    }
}
char pop()
{
    char ele;
    if(top==-1)
    {
    printf("Stack underflow");
    return 'o';
    }
    else
    {
     ele=arr[top--];
     return ele;
    }
}
int precedence(char character)
{
    switch(character)
    {
        case '^':
        return 3;
        break;
        case '*':
        case '/':
        return 2;
        break;
        case '+':
        case '-':
        return 1;
        break;
        default:
        return 0;
        break;
    }
}
void main()
{
    char input[123],output[123];
    int j=-1,i;
    int temp2;
    int choice=1;
    do
    {
    printf("Enter the string\n");
    scanf("%s",input);
    push('(');
    strcat(input,")");
    for(i=0;i<strlen(input);i++)
    {
        if(isalpha(input[i]))
        {
            output[++j]=input[i];
        }
        else if(input[i]=='(')
        {
            push(input[i]);
        }
        else if(input[i]=='+'||input[i]=='-'||input[i]=='*'||input[i]=='/'||input[i]=='^')
        {
            char temp2=pop();
            if(temp2=='(')
            {
                push(temp2);
            }
            else if(precedence(temp2)>=precedence(input[i]))
            {
                output[++j]=temp2;
            }
            push(input[i]);
        }
        else if(input[i]==')')
        {
            temp2 = pop();
			while(temp2 != '(')               
			{
				output[++j] = temp2;
				temp2 = pop();
			}
        }
    }
    printf("The postfix expression is\n%s",output);
    printf("Do you want to continue? 1/2\n");
    scanf("%d",&choice);
    }while(choice==1);
}