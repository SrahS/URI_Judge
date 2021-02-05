#include<bits/stdc++.h>
int main(){
    int N,X,in=0,out=0,cont;
    scanf("%d",&N);
    for(cont=0;cont<N;cont++){
        scanf("%d",&X);
        if((X>=10)&&(X<=20))
            in++;
        else
            out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
