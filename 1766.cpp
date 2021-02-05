#include <bits/stdc++.h> 
using namespace std; 

struct rena{
	string nome;
	int pes,ida;
	double alt;
};

bool ord(rena a, rena b){
	if(a.pes != b.pes)return a.pes > b.pes;
	if(a.ida != b.ida)return a.ida < b.ida;
	if(a.alt != b.alt)return a.alt < b.alt;
	return a.nome < b.nome;
}

void QuickSort(struct rena vet[ ], int esq, int dir){
	int i=esq, j=dir; 
	struct rena x,y;
	x = vet[(esq+dir)/2];	
	do{
		while (ord(vet[i],x) && (i < dir))i++;
		while (ord(x,vet[j]) && (j > esq))j--;
		if ( i <= j ){
			y = vet[i]; 
			vet[i] = vet[j]; 
			vet[j] = y;
			i++; j--;
		}
	}while ( i <=j );
	if ( esq < j ) QuickSort(vet, esq, j);
	if ( i < dir ) QuickSort(vet, i, dir);
}

int main(){
	int a;
	cin >> a;
	for(int i=0;i<a;i++){
		int b,c;
		cin >> b >> c;
		struct rena vet[b];
		for(int j=0;j<b;j++){
			cin >> vet[j].nome >> vet[j].pes >> vet[j].ida >> vet[j].alt;
		}
		QuickSort(vet,0,b-1);
		cout << "CENARIO {" << i+1 << "}\n";
		for(int j=0;j<c;j++)cout << j+1 << " - " << vet[j].nome << "\n";
	}
}
