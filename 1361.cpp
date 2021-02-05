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
	for(int i=0;i<n;i++){
		int q;
		cin >> q;
		int vet[q],neg[q],num,cn=0;
		for(int j=0;j<q;j++){
			cin >> num;
			if(num < 0){
				vet[j]=-num;
				neg[cn]=-num;
				cn++;
			}else{
				vet[j]=num;
			}
		}
		QuickSort(vet,0,q-1);
		int andar = 1,nega=0,com;
		for(int j=0;j<q;j++){
			com=nega;
			for(int k=0;k<cn;k++){
				if(vet[j]== neg[k]){
					
					nega=1;
					break;
				}
				if(k==cn-1)nega=0;
			}
			if(com!=nega && j!=0)andar++;
		}
		cout << andar << "\n";
	}
	
	return 0;
}
