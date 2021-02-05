#include <bits/stdc++.h>

using namespace std;

struct no{
	struct no *prox;
	int n;
};
struct fila{
	struct no *inicio;
	struct no *fim;
};
void create(fila *f){
	f->fim = NULL;
	f->inicio = NULL;
}

void push(fila *f,int z){
	struct no *aux;
	aux=(struct no *)malloc(sizeof(struct no));
	if(aux == NULL)return ;
	aux->n = z;
	aux->prox = NULL;
	if(f->inicio==NULL)f->inicio=aux;
	if(f->fim!=NULL)f->fim->prox=aux;
	f->fim = aux;
}
void pop(fila *f){
	struct no *aux;
	if(f->inicio==NULL)return ;
	aux=f->inicio;
	f->inicio=aux->prox;
	if(f->inicio==NULL)f->fim=NULL;
	free(aux);
}
int front(fila f){
	return f.inicio->n;
}


int main(){

    int n;

    scanf("%d",&n);
    while(n!=0){
       	fila f;
       	int cc=0;
       	create(&f);

        for(int i=1;i<=n;i++){
            push(&f,i);
            cc++;
        }
        printf("Discarded cards: ");
        while(cc>1){
            printf("%d",front(f));
            pop(&f);
            push(&f,front(f));
            pop(&f);
            cc--;
            if(cc>1){
                printf(", ");
            }
        }
        printf("\nRemaining card: %d\n",front(f));
        scanf("%d",&n);
    }

    return 0;
}
