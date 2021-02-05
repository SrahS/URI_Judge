#include<bits/stdc++.h>
void BubbleSort(int vet[],int tam){
    int j,i,aux;
    for(i=0;i<tam-1;i++){
        for(j=tam-1;j>i;j--){
            if(vet[j]>vet[j-1]){
                aux=vet[j];
                vet[j]=vet[j-1];
                vet[j-1]=aux;
            }
        }
    }
}

int main(){
	int  n=0,alunos=0,i,j,k,aux,qtd;
	int a[1000],d[1000];
	char trocas;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        alunos=0;
        k=0;
        qtd=0;
		scanf("%d",&alunos);
		for(j=0;j<alunos;j++){
			scanf("%d",&a[j]);
			d[j]=a[j];
        }
		BubbleSort(a,alunos);
		for(j=0;j<alunos;j++){
            if(a[j]==d[j])
				qtd++;
		}
		printf("%d\n",qtd);
	}
	return 0;
}
