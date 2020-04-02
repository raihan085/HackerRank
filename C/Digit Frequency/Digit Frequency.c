#include<stdio.h>
#include<string.h>

main()
{
    char ch[1001];
    int len,i,j,x,count;
    scanf("%s",ch);

    len = strlen(ch);
        x = 48;
    for(i=0;i<=9;i++)
    {

        count = 0;
        for(j=0;j<len;j++)
        {
            //printf("%d ",ch[j]);
            if(ch[j] == x)
                count++;
        }
        printf("%d ",count);
        x++;
    }

    return 0;
}
