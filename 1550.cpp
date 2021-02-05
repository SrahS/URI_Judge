#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n;
	int vet[200000];
	cin >> n;
	while(n--){
		memset(vet,-1,sizeof(vet));
		queue<int> fila;
		int q,b;
		cin >> q >> b;
		fila.push(q);
		int op=0,cont=0;
		while(op==0){
			cont++;
			int tam=fila.size();
			for(int i=0;i<tam;i++){
				int a=fila.front();
				fila.pop();
				if(a==b){
					op=1;
					break;
				}
				if(vet[a+1]==-1){
					fila.push(a+1);
					vet[a+1]=0;	
				}
				
				
				int r1 = a%10;
				a=a/10;
				if(a>0){
					r1=(r1*10)+(a%10);
					a=a/10;
					if(a>0){
						r1=(r1*10)+(a%10);
						a=a/10;
						if(a>0){
							r1=(r1*10)+(a%10);
							a=a/10;
							if(a>0) r1=(r1*10)+(a%10);
						}
					}
				}
				if(vet[r1]==-1){
					fila.push(r1);
					vet[r1]=0;	
				}
				
			}
			
			
		}
		
		
		printf("%d\n",cont-1);
	}
	
	return 0;
}
