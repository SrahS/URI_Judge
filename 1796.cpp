#include<bits/stdc++.h>
int main()
{
    int Q,Vi,cont,Y=0,N=0;
    scanf("%d",&Q);
    for(cont=0; cont<Q; cont++)
    {
        scanf("%d",&Vi);
        if(Vi==0)
            Y++;
        else if(Vi==1)
            N++;
    }
    if(Y>N)
        printf("Y\n");
    else
        printf("N\n");
    return 0;
}
