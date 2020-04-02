#include<stdio.h>
#include<string.h>

main()
{
    char s[1000];
    scanf("%[^\n]%*c", &s);
    printf("Hello, World!\n%[^\n]%*c",s);
    return 0;
}
