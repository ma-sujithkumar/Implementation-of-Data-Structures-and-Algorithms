#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}*start,*temp1;
int i,n,temp;
void CreateList(struct Node* temp1)
{
    scanf("%d",&temp);
    if(temp==0)
    {
        return;
    }
    struct Node* NewNode=(struct Node*)malloc(sizeof(struct Node));
    NewNode->data=temp;
    temp1->next=NewNode;
    CreateList(NewNode);
}
void main()
{
    start=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&temp);
    start->data=temp;
    temp1=start;
    CreateList(temp1);
    temp1=start;
    while(temp1!=NULL)
    {
        printf("%d->",temp1->data);
        temp1=temp1->next;
    }
    
}