#include<bits/stdc++.h>
int main(){
    int n100,n50,n20,n10,n5,n2,n1,valor;
    scanf("%d",&valor);
    printf("%d\n",valor);
    n100=valor/100;
    valor=valor%100;
    n50=valor/50;
    valor=valor%50;
    n20=valor/20;
    valor=valor%20;
    n10=valor/10;
    valor=valor%10;
    n5=valor/5;
    valor=valor%5;
    n2=valor/2;
    valor=valor%2;
    n1=valor/1;
    valor=valor%1;
    printf("%d nota(s) de R$ 100,00\n",n100);
    printf("%d nota(s) de R$ 50,00\n",n50);
    printf("%d nota(s) de R$ 20,00\n",n20);
    printf("%d nota(s) de R$ 10,00\n",n10);
    printf("%d nota(s) de R$ 5,00\n",n5);
    printf("%d nota(s) de R$ 2,00\n",n2);
    printf("%d nota(s) de R$ 1,00\n",n1);
    return 0;
}
