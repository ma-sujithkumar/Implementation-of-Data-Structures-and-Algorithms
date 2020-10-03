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
void main()
{
    char input[123];
    int i;
    int choice=1;
    do
    {
    printf("Enter the string\n");
    scanf("%s",input);
   for(i=0;i<strlen(input);i++)
   {
       push(input[i]);
   }
   printf("The reversed string is\n");
   for(i=0;i<strlen(input);i++)
   {
       printf("%c",pop());
   }
    printf("\nDo you want to continue? 1/2\n");
    scanf("%d",&choice);
    }while(choice==1);
}