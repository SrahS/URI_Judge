#include<bits/stdc++.h>
void T(int x,int y)
{
    if(y==0)
        return;
    T(x,y-1);
    printf("%d x %d = %d\n",y,x,y*x);
}
int main()
{
    int n;
    scanf("%d",&n);
    T(n,10);
    return 0;
}
