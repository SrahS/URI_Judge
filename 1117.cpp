#include<bits/stdc++.h>
int main()
{
    double x,y=0,z=0,p=0;
    do
    {
        scanf("%lf", &x);
        if(x>=0&&x<=10)
            p++;
        if(x < 0 || x > 10)
        {
            printf("nota invalida\n");
        }
        else if(z==0)
        {
            y=x;
            z=1;
        }
        else
            printf("media = %.2f\n", ((x + y) / 2));
    }
    while(p<2);

    return 0;
}
