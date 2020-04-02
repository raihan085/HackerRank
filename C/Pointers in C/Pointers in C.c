#include<stdio.h>
#include<math.h>

void updated(int *a,int *b)
{
    printf("%d\n%d",*a+*b,abs(*a-*b));
    return ;
}

main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    updated(&a,&b);

    return 0;
}
