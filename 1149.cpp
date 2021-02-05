#include<bits/stdc++.h>
int main()
{
    int a,n,i,sos=0;
    scanf("%d%d",&a,&n);
    do
    {
        if(n<=0)
            scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            sos+=(a+i);
        }
    }
    while(n<=0);
    printf("%d\n",sos);

    return 0;
}
