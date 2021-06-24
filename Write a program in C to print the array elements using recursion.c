#include <stdio.h>
int arr[]={10,20,30,40,50,60};
void print(int i,int n)
{
  if(i>=n)
  return;
  else
  {
      printf("%d\t",arr[i]);
      print(i+1,n);
  }
}
int main()
{

    int n=sizeof(arr)/sizeof(arr[0]);
    print(0,6);
}
