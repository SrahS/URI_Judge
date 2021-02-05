#include<bits/stdc++.h>
int main(){
    char x[101];
    double d,t,n=0.0;
    while(scanf("%d",&d)!=EOF)
    {
        gets(x);
        scanf("%lf",&d);
        t+=d;
        n+=1.0;
    }
    printf("%.1lf\n",t/n);
    return 0;
}
