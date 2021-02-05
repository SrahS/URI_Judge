#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	cin >> a >> b;
	while(a!=0 || b!=0){
		queue<pair<int, int> > fila;
		fila.push(make_pair(1,2));
		int pegou=0,op=1;
	//	int vet[2000000];
	//	memset(vet,-1,sizeof(vet));
		if(a>100){
			printf("Let me try!\n");
		}else{
			while(!fila.empty()){
				int fre=fila.front().first;
				//printf("%d\n",fre);
				int pulfre=fila.front().second;
				if(fre==b)pegou=1;
				fila.pop();
				int dist = (pulfre*2)-1;
				if(fre-dist>0)fila.push(make_pair(fre-dist,pulfre+1));
				if(fre+dist<=a)fila.push(make_pair(fre+dist,pulfre+1));
				if(pegou==1){
				//	if(fre+dist==b+1 || fre-dist==0){
						op=0;
						break;
				//	}
				}
			
			}
			if(op==0)printf("Let me try!\n");
			else printf("Don't make fun of me!\n");
		}
		
		
		
		cin >> a >> b;
	}
	
	
	return 0;
}
