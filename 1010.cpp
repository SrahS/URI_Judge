#include<bits/stdc++.h>
int main(){
    int CP1,CP2,NP1,NP2;
    double VP1,VP2,V;
    scanf("%d",&CP1);
    scanf("%d",&NP1);
    scanf("%lf",&VP1);
    scanf("%d",&CP2);
    scanf("%d",&NP2);
    scanf("%lf",&VP2);
    V=(NP1*VP1)+(NP2*VP2);
    printf("VALOR A PAGAR: R$ %.2lf\n",V);
    return 0;
}
