#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b;
	cin >> a >> b;
	queue<int> fila;
	fila.push(a);
	set<int> conj;
	int op=0,cont=0;
	while(op==0){
		cont++;
		int tam=fila.size();
		for(int i=0;i<tam;i++){
			int fre=fila.front();
			if(fre==b){
				op=1;
				break;
			}
			fila.pop();
			if(!conj.count(fre+7)){
				conj.insert(fre+7);
				fila.push(fre+7);
			}
			if(!conj.count(fre-7)){
				conj.insert(fre-7);
				fila.push(fre-7);
			}
			if(!conj.count(fre*2)){
				conj.insert(fre*2);
				fila.push(fre*2);
			}
			if(!conj.count(fre*3)){
				conj.insert(fre*3);
				fila.push(fre*3);
			}
			if(!conj.count(fre/2)){
				conj.insert(fre/2);
				fila.push(fre/2);
			}
			if(!conj.count(fre/3)){
				conj.insert(fre/3);
				fila.push(fre/3);
			}
		}
	}
	cout << cont-1 << "\n";
	
	return 0;
}
