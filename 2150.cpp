#include<bits/stdc++.h>
int main(){
	char vogais[1000],frase[1000];
	int i,j,t;
	while(fgets(vogais,1000,stdin)!=NULL){
		if(vogais[0]<' ')
			break;
		fgets(frase,1000,stdin);
		for(i=0;frase[i]>=32;i++);
		frase[i]='\0';
		for(i=0;vogais[i]>=32;i++);
		vogais[i]='\0';
		for(i=0,t=0;frase[i]!='\0';i++)
			for(j=0; vogais[j]!='\0';j++)
				if(frase[i]==vogais[j])
					t++;
		printf("%d\n",t);
	}
	return 0;
}
