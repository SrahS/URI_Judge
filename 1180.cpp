#include<bits/stdc++.h>
int main()
{
    int N,i,m=999999,p=-1;
    scanf("%d",&N);
    int X[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
        if (X[i]<m)
        {
            m=X[i];
            p=i;
        }
    }
    printf("Menor valor: %d\n",m);
    printf("Posicao: %d\n",p);
    return 0;
}
