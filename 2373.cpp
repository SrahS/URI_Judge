#include<bits/stdc++.h>
int main()
{
    int N,i,m=0;
    scanf("%d",&N);
    int L[N],C[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&L[i]);
        scanf("%d",&C[i]);
        if(L[i]>C[i])
        {
            m=m+C[i];
        }
    }
    printf("%d\n",m);
    return 0;
}
