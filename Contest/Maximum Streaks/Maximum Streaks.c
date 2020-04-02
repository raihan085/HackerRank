#include<stdio.h>

int main()
{
    int n,i,tailCount=0,headCount=0,MaxTail=0,MaxHead=0;
    scanf("%d",&n);

    char ch[n][10];

    for(i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
    }

    for(i=0;i<n;i++)
    {

        if( i != 0 && ch[i][0] == 'H' && ch[i-1][0] == 'T')
        {
            if(MaxTail <= tailCount)
                MaxTail = tailCount;
            headCount = 1;
        }
        else if(i != 0 && ch[i][0] == 'T' && ch[i-1][0] == 'H')
        {
            if(MaxHead <= headCount)
                MaxHead = headCount;
            tailCount = 1;
        }
        else if(ch[i][0] == 'H')
            headCount ++;
        else if(ch[i][0] == 'T')
            tailCount ++;

    }

    if(tailCount == n)
        MaxTail = n;
    else if(headCount == n)
        MaxHead = n;
    else if(MaxTail < tailCount)
        MaxTail = tailCount;
    else if(MaxHead < headCount)
        MaxHead = headCount;

    printf("%d %d",MaxHead,MaxTail);
    return 0;
}
