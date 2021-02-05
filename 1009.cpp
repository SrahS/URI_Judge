#include<bits/stdc++.h>
int main (){
    char NOME[30];
    double S,V,TOTAL;
    scanf("%s",&NOME);
    scanf("%lf",&S);
    scanf("%lf",&V);
    TOTAL=(V*15/100)+S;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
