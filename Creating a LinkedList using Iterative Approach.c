#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
}*start,*temp1;
void createList()
{
    int i,n,temp;
    start=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&temp);
    start->data=temp;
    temp1=start;
    for(i=2;i<=n;i++)
    {
        struct Node* NewNode=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d",&temp);
        NewNode->data=temp;
        temp1->next=NewNode;
        temp1=NewNode;
    }
}
void main()
{
    createList();
}