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
   
   	int q;
   	cin >> q;
   	for(int i=0;i<q;i++){
   		int n;
		cin	>> n;
		int carn[n];
		for(int j=0;j<n;j++)cin >> carn[j];
		QuickSort(carn,0,n-1);
		int cont=1;
		for(int j=1;j<n;j++)if(carn[j]!=carn[j-1])cont++;
		
		cout << cont << "\n";
	}
	
	
	

    return 0;
}
