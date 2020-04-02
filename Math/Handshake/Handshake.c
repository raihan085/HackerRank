#include<stdio.h>

int f(int n)
{
        int mul = 0;
        for(int i=1;i<n;i++)
        {
            mul = mul + i;
        }
        return mul;

}

int main()
{
    int n,t,i;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        printf("%d\n",f(n));
    }
    return 0;
}
