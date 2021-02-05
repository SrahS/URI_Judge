#include<bits/stdc++.h>

int main()
{
    double x,y,i;
    scanf("%lf%lf",&x,&y);
    do
    {
        x=abs(x-y);
        i=ceil(y/x);
    }
    while(x>y);
    printf("%.0lf\n",i);

    return 0;
}
