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

int main() {  
    
    int n1,n2,n3,n4,n5;
    scanf("%d",&n1);
    int v1[n1];
    for(int i=0;i<n1;i++)cin >> v1[i];
    scanf("%d",&n2);
    int v2[n2];
    for(int i=0;i<n2;i++)cin >> v2[i];
    scanf("%d",&n3);
    int v3[n3];
    for(int i=0;i<n3;i++)cin >> v3[i];
    scanf("%d",&n4);
    int v4[n4];
    for(int i=0;i<n4;i++)cin >> v4[i];
    scanf("%d",&n5);
    int v5[n5];
    for(int i=0;i<n5;i++)cin >> v5[i];
    int tot[n1*n2*n3*n4*n5],cont=0;
    
    for(int i=0;i<n1;i++){
    	for(int j=0;j<n2;j++){
    		for(int k=0;k<n3;k++){
    			for(int l=0;l<n4;l++){
    				for(int z=0;z<n5;z++){
    					tot[cont]=v1[i]+v2[j]+v3[k]+v4[l]+v5[z];
    					cont++;
					}
				}
			}
		}
	}
	int num,res=0;
	cin >> num;
	QuickSort(tot,0,cont-1);
	for(int i=cont-1;i>cont-1-num;i--)res+=tot[i];
	cout << res << "\n";
      
    return 0;  
} 
