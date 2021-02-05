#include<bits/stdc++.h>
int main(){
    int c,i;
    double t1;
    char nome[10000];
    scanf("%d",&c);
    for(i=0;i<c;i++){
        scanf("%s",nome);
        t1=strlen(nome);
        t1=t1*0.01;
        printf("%.2lf\n",t1);
    }
    return 0;
}
