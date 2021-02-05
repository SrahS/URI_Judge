#include<bits/stdc++.h>
int main(){
    int N[10],v,i;
    scanf("%d",&v);
    N[0]=v;
    for(i=1;i<10;i++)
    {
        N[i]=N[i-1]*2;
    }
    for(i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;
}
