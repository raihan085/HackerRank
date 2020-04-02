#include<stdio.h>
#include<math.h>


int prime(unsigned long long int n)
{
    unsigned long long int i,m;

    if(n == 1)
        return 1;
    else if(n == 2)
        return 0;
    m = sqrt(n) + 1;

    for(i=2;i<=m;i++)
    {
        if(n%i == 0)
            return 1;
    }

    return 0;
}

int f(unsigned long long int n)
{
    unsigned long long int i,mul=1;
    int m,count=0;

    for(i=1;mul*i<=n;i++)
    {
        m = prime(i);
        //printf("prime = %d i=%d\t",m,i);
        if(m == 0 && mul*i <= n)
        {
            //printf("i = %lld, mul = %lld\n",i,mul*i);
            mul = mul * i;
            count++;
        }
    }
    return count;
}

int main()
{
    int t,i;
    scanf("%d",&t);
    unsigned long long int n;

    for(i=1;i<=t;i++)
    {
        scanf("%llu",&n);
        printf("%d\n",f(n));
    }

    return 0;
}
