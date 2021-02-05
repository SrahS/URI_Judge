#include<bits/stdc++.h>
int main(){
    int a,d,i,j,k,l,n,tempo;
    while(1){
        scanf("%d %d",&a,&d);
        if(a==0&&d==0)
            break;
        int atq[a],dfs[d];
        for(i=0;i<a;i++)
            scanf("%d",&atq[i]);
        for(i=0;i<d;i++)
            scanf("%d",&dfs[i]);
        for(i=0,n=1;i<a;i++){
            for(j=n;j<a;j++){
                if(atq[j]<atq[i]){
                    tempo=atq[j];
                    atq[j]=atq[i];
                    atq[i]=tempo;
                }
            }
            n++;
        }
        for(i=0,n=1;i<d;i++){
            for(j=n;j<d;j++){
                if(dfs[j]<dfs[i]){
                    tempo=dfs[j];
                    dfs[j]=dfs[i];
                    dfs[i]=tempo;
                }
            }
            n++;
        }
        if(atq[0]<dfs[0]||atq[0]<dfs[1])
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
