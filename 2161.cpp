#include<bits/stdc++.h>

double raizQ10(int n)
{
    if(n==0) return 0;
    if(n==1) return 1/6;
    return(1/(6+raizQ10(n-1)));
}
int main()
{
    double n;
    scanf("%lf",&n);
    n++;
    printf("%.10lf\n",raizQ10(n)+3);
}

