#include<bits/stdc++.h>
long long int func(long long int n, int x, int y, int z){
    if(n==1)
        return x+y;
    z=x+y;
    y=x;
    x=z;
    return (func(n-1,x,y,z));
}
int main(){
    int a=1,b=0,c,res;
    long long int n;
    do{
        scanf("%lld",&n);
        if(n==0){
            return(0);
        }
        res=func(n,a,b,c);
        printf("%d\n",res);
    }while(n!=0);
    return 0;
}
