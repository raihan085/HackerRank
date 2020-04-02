#include<stdio.h>
#include<string.h>

main()
{
    char s[1001];
    int len,i;

    scanf("%[^\n]%*c",s);

    len = strlen(s);

    for(i=0;i<len;i++)
    {
        if(s[i] == ' ')
            printf("\n");
        else
            printf("%c",s[i]);
    }

    return 0;
}
