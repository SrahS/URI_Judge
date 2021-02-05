#include<bits/stdc++.h>
int main()
{
    int l,c;
    double soma=0,media,M[12][12];
    char O;
    scanf(" %c",&O);
    for(l=0; l<12; l++)
    {
        for(c=0; c<12; c++)
        {
            scanf("%lf",&M[l][c]);
            if(l<c)
                soma+=M[l][c];
        }
    }
    if(O=='S')
    {
        printf("%.1lf\n",soma);
    }
    else if(O=='M')
    {
        media=soma/66;
        printf("%.1lf\n",media);
    }
    return 0;
}
