#include<stdio.h>

int f(int *n,int sum)
{
    sum = sum + *n;
    return sum;
}

main()
{
    int t,i,sum=0;
    scanf("%d",&t);

    int marks[t];
    char gender;

    for(i=0;i<t;i++)
        scanf("%d ",&marks[i]);

    scanf("%c",&gender);


    for(i=0;i<t;i++)
    {
        if(gender == 'b' && i%2 == 0)
                sum = f(&marks[i],sum);
        else if (gender == 'g' && i%2 == 1)
            sum = f(&marks[i],sum);
    }

    printf("%d",sum);

    return 0;
}
