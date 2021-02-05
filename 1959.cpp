#include<bits/stdc++.h>

long long int PolR (int N, int L)
{
    if(L==0)
        return 0;
    else
        return (N+PolR(N,L-1));
}

int main()
{
    int a,b;
    long long int x;
    scanf("%d%d",&a,&b);
    x= PolR(a,b);
    printf("%lld\n",x);
    return 0;
}
