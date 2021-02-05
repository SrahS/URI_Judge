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
   
   	int n,par[100001],imp[100001],cp=0,ci=0;
   	cin >> n;
   	for(int i=0;i<n;i++){
   		int num;
		   cin >> num;
		   if(num%2==0){
		   	par[cp]=num;
		   	cp++;
		   }else{
		   	imp[ci]=num;
		   	ci++;
		   }
	}
	QuickSort(par,0,cp);
	for(int i=1;i<=cp;i++)cout << par[i] << "\n";
	QuickSort(imp,0,ci);
	for(int i=ci;i>0;i--)cout << imp[i] << "\n";

    return 0;
}
