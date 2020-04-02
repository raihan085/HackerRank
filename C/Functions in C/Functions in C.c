#include<stdio.h>

int f(int a,int b,int c,int d)
{
    if(b<=a && c<=a && d<=a)
        return a;
    else if(a<b && c<=b && d<=b)
        return b;
    else if(a<c && b<c && d<=c)
        return c;

    return d;

}

main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    printf("%d",f(a,b,c,d));

    return 0;
}
