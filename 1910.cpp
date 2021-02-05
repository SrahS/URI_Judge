#include<bits/stdc++.h>
#define oo 0x3f3f3f

using namespace std;


int main(){

    int orig,dest,n;


    while(~scanf("%d %d %d",&orig,&dest,&n)){
        if(!orig && !dest && !n)break;
        int can;
        set<int> conj;
        for(int i=0;i<n;i++){
            scanf("%d",&can);
            conj.insert(can);
        }
        int vis[400000];
        memset(vis,0,sizeof(vis));
        queue<pair<int,int> > fila;
        fila.push(make_pair(orig,0));
        while(!fila.empty() && fila.front().first!=dest){

            int valor=fila.front().first,qtd=fila.front().second;
            fila.pop();
            if(vis[valor]==0){
                vis[valor]=1;
                if(conj.find(valor-1)==conj.end() && valor-1>0){
                    fila.push(make_pair(valor-1,qtd+1));
                }
                if(conj.find(valor+1)==conj.end() && valor+1<=100000){
                    fila.push(make_pair(valor+1,qtd+1));
                }
                if(conj.find(valor*2)==conj.end() && valor*2<=100000){
                    fila.push(make_pair(valor*2,qtd+1));
                }
                if(conj.find(valor*3)==conj.end() && valor*3<=100000){
                    fila.push(make_pair(valor*3,qtd+1));
                }
                if(conj.find(valor/2)==conj.end() && valor%2==0){
                    fila.push(make_pair(valor/2,qtd+1));
                }
            }
        }

        if(!fila.empty()){
                printf("%d\n",fila.front().second);
        }else{
            printf("-1\n");
        }
}


    return 0;
}

