#include<bits/stdc++.h>
int main(){
    int c,n=0;
    double a;
    for(c=1;c<=6;c++){
        scanf("%lf",&a);
        if(a>0)n++;
    }
    printf("%d valores positivos\n",n);
    return 0;
}
