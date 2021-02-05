#include<bits/stdc++.h>

double raizQ2(int n)
{
    if(n==0) return 0;
    if(n==1) return 1/2;
    return(1/(2+raizQ2(n-1)));
}
int main()
{
    double n;
    scanf("%lf",&n);
    n++;
    printf("%.10lf\n",raizQ2(n)+1);
}
