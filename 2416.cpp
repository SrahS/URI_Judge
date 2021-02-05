#include<bits/stdc++.h>
int main(){
    int distancia,pista,voltas,ponto;
    scanf("%d",&distancia);
    scanf("%d",&pista);
    voltas=distancia/pista;
    ponto=distancia%pista;
    printf("%d\n",ponto);
    return 0;
}
