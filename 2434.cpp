#include<bits/stdc++.h>
int main()
{
    int N,i,m;

    scanf("%d",&N);
    int S[N];
    scanf("%d",&S[0]);
    m=S[0];
    for(i=1; i<=N; i++)
    {
        scanf("%d",&S[i]);
        S[i]=S[i-1]+S[i];
        if (S[i]<m)
            m=S[i];
    }
    printf("%d\n",m);
    return 0;
}
