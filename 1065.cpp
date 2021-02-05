#include<bits/stdc++.h>
int main(){
    int i,x,par=0;
    for(i=0;i<5;i++){
        scanf("%d",&x);
    if(x%2==0)
            par++;
    }
    printf("%d valores pares\n",par);
    return 0;
}
