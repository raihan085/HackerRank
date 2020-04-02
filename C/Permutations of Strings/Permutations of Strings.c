#include<stdio.h>

main()
{
    int n,i;
    scanf("%d",&n);

    char ch[n][n];

    for(i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
    }

    for(i=0;i<n;i++)
        printf("%s\n",ch[i]);

    return 0;
}
