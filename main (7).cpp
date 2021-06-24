#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findDepthRec(char tree[],int length,int index)
{
    if(index>=length || tree[index]=='l')
    return 0;
    index++;
   int left=findDepthRec(tree,length,index);
    index++;
    int right=findDepthRec(tree,length,index);
    return max(left,right)+1;
}

int findDepth(char tree[],int length)
{
    int index=0;
    findDepthRec(tree,length,index);
}
int main()
{
    char tree[] = "nlnlnlnl";
    int length=strlen(tree);
    cout<<findDepth(tree,length)<<endl;
}