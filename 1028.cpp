#include<bits/stdc++.h>
int Figu(int a, int b)
{
    if(b==0)
        return a;
    return Figu(b,a%b);
}
int main()
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        printf("%d\n",Figu(a,b));
    }
    return 0;
}
