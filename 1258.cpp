#include <bits/stdc++.h> 
using namespace std; 

struct camisa{
	char nome[10000];
	string nom,cor,tam;

};

bool ord(camisa a, camisa b){
	if(a.cor != b.cor)return a.cor < b.cor;
	if(a.tam != b.tam)return a.tam > b.tam;
	return a.nom < b.nom;
}

void QuickSort(struct camisa vet[ ], int esq, int dir){
	int i=esq, j=dir; 
	struct camisa x,y;
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
	
	int n;
	
	cin >> n;
	int f=0;
	struct camisa vet[100];
	while(n!=0){
		if(f==1)cout << "\n";
		for(int i=0;i<n;i++){
			scanf(" %[^\n]s",vet[i].nome);
			cin >> vet[i].cor >> vet[i].tam;	
			vet[i].nom = vet[i].nome;
		}
		
		 
		QuickSort(vet,0,n-1);
		for(int i=0;i<n;i++)cout << vet[i].cor << " " << vet[i].tam << " " << vet[i].nom << "\n";
		cin >> n;
		f=1;
	}
	
	return 0;
}
