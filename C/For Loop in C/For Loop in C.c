#include<stdio.h>

void f(int n)
{
   if(n==1)
    printf("one\n");
   else if(n==2)
    printf("two\n");
   else if(n==3)
    printf("three\n");
   else if(n==4)
    printf("four\n");
   else if(n==5)
    printf("five\n");
   else if(n==6)
    printf("six\n");
   else if(n==7)
    printf("seven\n");
   else if(n==8)
    printf("eight\n");
   else
    printf("nine\n");
    return ;

}

void g(int n)
{
    if(n%2 == 0)
        printf("even\n");
    else
        printf("odd\n");
    return;
}

main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        if(i<=9)
            f(i);
        else
            g(i);
    }

    return 0;
}
