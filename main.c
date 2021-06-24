#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root;
struct node* createNode(int value){
    struct node* Node=(struct node*)malloc(sizeof(struct node));
    if(Node!=NULL)
    {
        Node->data=value;
        Node->left=NULL;
        Node->right=NULL;
    }
    return Node;
    
}
void printTree(struct node* root)
{
    printf("%d\n",root->data);
    printf("left\n");
    printTree(root->left);
    printf("right\n");
    printTree(root->right);
}
int main()
{
    struct node* n1 = createNode(1);
    struct node* n2 = createNode(2);
    struct node* n3 = createNode(3);
    struct node* n4 = createNode(4);
    struct node* n5 = createNode(5);
    
    
    n1->left=n2;
    n2->left=n3;
    n1->right=n4;
    n2->right=n5;
    printTree(n1);
    
}