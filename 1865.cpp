#include<bits/stdc++.h>
int main(){
    int n,c,i;
    char nome[20];
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%s",nome);
        scanf("%d",&n);
        if(strcmp(nome,"Thor")==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
