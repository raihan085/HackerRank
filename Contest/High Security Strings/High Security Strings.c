#include<stdio.h>
#include<string.h>

main()
{
    char ch[101];
    int n,len,i,sum=0;

    scanf("%s",ch);
    len = strlen(ch);
    scanf("%d",&n);

    for(i=0;i<len;i++)
    {
        sum += (n + (ch[i]-97))%26;
    }

    printf("%d",sum);

    return 0;

}
