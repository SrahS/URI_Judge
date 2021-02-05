#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int a,b,c;
	cin >> a >> b >> c;
	while(a!=0 && b!=0 && c!=0){
		int vet[1000];
		memset(vet,0,sizeof(vet));
		int mat[a][b];
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				scanf("%d",&mat[i][j]);
				if(mat[i][j]==0)vet[j]++;
			}
		}
		queue<int> fila;
		for(int i=0;i<c;i++){
			int num;
			cin >> num;
			fila.push(num);
		}
		for(int i=b-1;i>=0;i--){
			if(vet[i]>0){
				for(int j=a-1;j>=0;j--){
					if(mat[j][i]==0 && fila.size()>0){
						mat[j][i]=fila.front();
						fila.pop();
						vet[i]--;
					}
				}
			}
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				printf("%d",mat[i][j]);
				if(j!=b-1)printf(" ");
			}
			printf("\n");
		}	
		
		
		cin >> a >> b >> c;	
	}
	
	
	return 0;
}
