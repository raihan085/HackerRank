#include<stdio.h>

main()
{
    char ch;
    char s[100];
    char sen[1000];

    scanf("%c",&ch);
    scanf("%s\n",s);
    scanf("%[^\n]%*c",sen);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);

    return 0;
}
