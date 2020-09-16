#include<stdio.h>
int isFull(int size, int* top)
{
  return *(top)+1==size;
}
int isEmpty(int* top)
{
  return (*(top)==-1);
}
void push(int arr[],int* top, int size, int item)
{
  if (isFull(size,top))
    printf("Stack Overflow\n");
  else
  {
    arr[++(*top)]=item;
  }
  
}
void pop(int arr[],int* top, int size)
{
  if(isEmpty(top))
  {
    printf("Stack Underflow\n");
  }
  else
  {
    printf("Popped %d\n",arr[(*top)--]);
  }
  
}
void show(int arr[],int* top,int size)
{
  if(isEmpty(top))
  {
    printf("No elements to show\n");
  }
  else
  {
    for(int i=(*top);i>=0;i--)
    {
      printf("%d ",arr[i]);
 
          }
               printf("\n");
  }
}
void top_show(int arr[],int* top)
{
 if(isEmpty(top))
  {
    printf("Stack Underflow\n");
  }
  else
  {
    printf("The top element is %d\n",arr[(*top)]);
  }
}
void main()
{

  char choice='y';
  int i;
  int arr[24];
  int size,item;
  int* top;
  *top=-1;
  printf("Enter the size of the stack\n");
  scanf("%d",&size);
  do
  {
    printf("Enter a choice\n1.Push\n2.Pop\n3.Display\n4.top\n");
    scanf("%d",&i);
    switch(i)
    {
      case 1:
      printf("Enter an element\n");
      scanf("%d",&item);
      push(arr,top,size,item);
      break;
      case 2:
      pop(arr,top,size);
      break;
      case 3:
      show(arr,top,size);
      break;
      case 4:
      top_show(arr,top);
      break;
      default:
      printf("INvalid entry\n");
    }
    printf("Do you wish to continue?(y/n)\n");
    fflush(stdin);
    scanf(" %c",&choice);

  } while (choice=='y');
  
  
}