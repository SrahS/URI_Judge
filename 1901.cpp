#include <bits/stdc++.h>
using namespace std;

void QuickSort(int vet[ ], int esq, int dir){
	int i=esq, j=dir; 
	int x,y;
	x = vet[(esq+dir)/2];	
	do{
		while ((vet[i] < x) && (i < dir))i++;
		while ((x < vet[j]) && (j > esq))j--;
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
   	int mat[n][n];
   	for(int i=0;i<n;i++){
   		for(int j=0;j<n;j++){
   			cin >> 	mat[i][j];
		}
	}
	int vet[n*2];
	for(int i=0;i<n*2;i++){
		int x,y;
		cin >> x >> y;
		vet[i]=mat[x-1][y-1];
	}
	QuickSort(vet,0,(n*2)-1);
	int cont=1;
	for(int j=1;j<n*2;j++)if(vet[j]!=vet[j-1])cont++; 
	cout << cont << "\n";

    return 0;
}
