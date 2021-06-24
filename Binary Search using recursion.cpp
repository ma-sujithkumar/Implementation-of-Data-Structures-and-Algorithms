#include<iostream>
using namespace std;
void BinarySearch(int arr[],int n,int f,int l,int m,int search)
{
    m=(f+l)/2;
    if(arr[m]==search)
    {
        printf("The element is found at %d",m);
    }
    else
    {
        if(search<arr[m])
        {
            BinarySearch(arr,n,f,m,m,search);
        }
        else if(search>arr[m])
        {
            BinarySearch(arr,n,m,l,m,search);
        }
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int f=0;
    int l=n-1;
    int m=(f+l)/2;
    int search=70;
    BinarySearch(arr,n,f,l,m,search);
}