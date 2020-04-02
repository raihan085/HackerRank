#include<stdio.h>
#include<math.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int px[n],py[n],qx[n],qy[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d %d %d %d",&px[i],&py[i],&qx[i],&qy[i]);

        if(px[i] <= qx[i])
            printf("%d ",qx[i]+abs(px[i]-qx[i]));
        else if(px[i] >= qx[i])
            printf("%d ",qx[i]-abs(px[i]-qx[i]));
        if(py[i] <= qy[i])
            printf("%d\n",qy[i]+abs(py[i]-qy[i]));
        else if(py[i] >= qy[i])
            printf("%d\n",qy[i]-abs(py[i]-qy[i]));
    }

    return 0;
}
