#include<bits/stdc++.h>
int main(){
	int cod,quant;
	double total;
	scanf("%d%d",&cod,&quant);
	switch(cod){
	case 1:
		total=quant*4.0;
	break;
	case 2:
		total=quant*4.50;
	break;
	case 3:
		total=quant*5.0;
	break;;
	case 4:
		total=quant*2.0;
	break;
	case 5:
		total=quant*1.50;
	break;
}
		printf("Total: R$ %.2lf\n",total);
	
	return 0;
}
