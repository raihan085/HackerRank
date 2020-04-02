#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,h,n;
    scanf("%f %f",&b,&a);
    int m;
    n = (a*2)/b;
    m = (a*2)/b;
    if((n-m)>0)
    {
        printf("%d",m + 1);
    }
    else
         printf("%d",m);

    return 0;

}
