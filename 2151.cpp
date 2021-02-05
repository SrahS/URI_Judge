#include <bits/stdc++.h>

using namespace std;

int main(){

    int q,**mat;
    mat = (int **)malloc(100*sizeof(int *));
   	for(int i=0;i<100;i++){
    	mat[i]=(int *)malloc(100*sizeof(int));
	}
    scanf("%d",&q);
    for(int k=0;k<q;k++){
    	int m,n,x,y;
    	scanf("%d %d %d %d",&m,&n,&x,&y);
    	x--;
    	y--;
    	for(int i=0;i<m;i++){
    		for(int j=0;j<n;j++){
    			scanf("%d",&mat[i][j]);
    			int difi= abs(i-x);
    			int difj= abs(j-y);
    			int maior;
    			if(difj>difi)maior=difj;
    			else maior=difi;
    			maior=10-maior;
    			if(maior<=0)maior=1;
    			mat[i][j]+=maior;
			}
		}
		printf("Parede %d:\n",k+1);
		for(int i=0;i<m;i++){
    		for(int j=0;j<n;j++){
    			printf("%d",mat[i][j]);
    			if(j!=n-1)printf(" ");
			}
			printf("\n");
		}
	}
	for(int i=0;i<100;i++){
		free(mat[i]);
	}
	free(mat);
    

    return 0;
}
