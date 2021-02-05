#include<bits/stdc++.h>
int main()
{
    int a,s=0;
    double i=0;
    do
    {
        scanf("%d",&a);
        if (a>0)
        {
            s+=a;
            i++;
        }
    }
    while(a>0);
    printf("%.2lf\n",s/i);

    return 0;
}
