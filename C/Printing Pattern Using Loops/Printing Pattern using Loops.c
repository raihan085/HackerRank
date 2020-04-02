#include<stdio.h>

int a[1000][1000],i,j;

void f(int n)
{
    for(i=1;i<2*n;i++)
        {
            for(j=1;j<2*n;j++)
            {
                if(i==1 || i==(2*n-1) || j ==1 || j == (2*n -1))
                    a[i][j] = n;
            }
        }
        return ;
}

void main()
{
    int n;
    scanf("%d",&n);
    int number;

    for(i=n;i>=1;i--)
        f(i);

    for(i=1;i<2*n;i++)
    {
        for(j=1;j<2*n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

    return ;
}
