#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=0,last=n-1;
    int search=2;
    int mid;
    mid=(first+last)/2;
    while(arr[mid]!=search)
    {
        if(search<arr[mid])
        {
            last=mid;
        }
        else if(search>arr[mid])
        {
            first=mid;
        }
          mid=(first+last)/2;
    }
    if(arr[mid]==search)
    {
    
            printf("The element is found at %d",mid);

    }
}