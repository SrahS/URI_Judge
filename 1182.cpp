#include<bits/stdc++.h>
int main()
{
    int C,l,c;
    double soma=0,media,M[12][12];
    scanf("%d",&C);
    char T;
    scanf(" %c",&T);
    for(l=0; l<12; l++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf",&M[l][c]);
            if(C==c)
                soma+=M[l][c];
        }
    }
    if(T=='S')
    {
        printf("%.1lf\n",soma);
    }
    else if(T=='M')
    {
        media=soma/12;
        printf("%.1lf\n",media);
    }
    return 0;
}
