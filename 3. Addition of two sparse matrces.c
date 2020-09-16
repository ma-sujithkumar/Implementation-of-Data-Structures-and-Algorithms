#include <stdio.h>

int main()
{
    int sp1[100][100],sp2[100][100];
    int i=0,j=0,m1=3,m2=5;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<m2;j++)
        {
            if(sp1[i][0]==sp2[j][0] && sp1[i][1]==sp2[j][1])
            {
                sp1[i][2]+=sp1[j][2];
            }
        }
    
    }


    return 0;
}
