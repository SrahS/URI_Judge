#include<bits/stdc++.h>
int main() {
	int distancia,gasolina,pedagio,preco,VALOR;
	scanf("%d",&distancia);
	scanf("%d",&pedagio);
	scanf("%d",&gasolina);
	scanf("%d",&preco);
	VALOR=(distancia*gasolina)+((distancia/pedagio)*preco);
	printf("%d\n",VALOR);
	return 0;
}
