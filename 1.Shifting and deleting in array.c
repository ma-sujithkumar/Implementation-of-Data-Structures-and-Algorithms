
#include <stdio.h>
void insert(int a[],int ele,int pos,int n)
{
    pos=pos-1;
    for(int i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=ele;
    for(int i=0;i<n+1;i++)
    {
        printf("%d,",a[i]);
    }
    
}
void delete(int a[],int pos,int n)
{
    pos=pos-1;
    for(int i=pos;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    for(int i=1;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    
}
int main()
{
    char k='y';
    do{
    int n,a[40],ele,pos;
    int choice;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter your choice.\n1.Inserting an element\n2.Deleting an element\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter an element to be inserted");
        scanf("%d",&ele);
        printf("Enter the position");
        scanf("%d",&pos);
        insert(a,ele,pos,n);
        break;
        
        case 2:
        printf("Enter the position to be deleted");
        scanf("%d",&pos);
        delete(a,pos,n);
        break;
        
        default:
        printf("Enter a correct option");
        break;
        }
    printf("Do you want to continue (y\n)?");
    scanf("%c",&k);
}while(k=='y');
}