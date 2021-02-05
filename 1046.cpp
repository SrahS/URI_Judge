#include<bits/stdc++.h>

int main(){
	int a,b,r;
	
	scanf("%d %d",&a,&b);
	
	if(a==b){
		printf("O JOGO DUROU 24 HORA(S)\n",r);
}
	else if(b-a<0){
		printf("O JOGO DUROU %d HORA(S)\n",r=24+(b-a));
}
	else{
	printf("O JOGO DUROU %d HORA(S)\n",r=b-a);	
}
	return 0;
}
