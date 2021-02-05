#include<bits/stdc++.h>

main()
{
    int N,X,i,*V;
    V = (int *)malloc(2001*sizeof(int));//faz alocacao
    scanf("%d",&N);
    for(i=0; i<2001; i++)
    {
        V[i]=0;
    }
    for(i=0; i<N; i++)
    {
        scanf("%d",&X);
        V[X]++;
    }
    for(i=0; i<2001; i++)
    {
        if(V[i]!=0)
            printf("%d aparece %d vez(es)\n",i,V[i]);
    }
    free(V);//libera memoria
    return 0;
}
