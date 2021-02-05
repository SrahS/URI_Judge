#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a;
	cin >> a;
	queue<int> fila;
	fila.push(2);
	int res=1;
	while(fila.front()!=1){
		int fre=fila.front();
		fila.pop();
		if(fre<=a/2){
			fre*=2;
			fila.push(fre);
		}else{
			fre-=(a-fre+1);
			fila.push(fre);
		}
		res++;
	}
	printf("%d\n",res);
	
	
	return 0;
}
