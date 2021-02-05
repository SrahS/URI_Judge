#include<bits/stdc++.h>
int main(){
	int A,B;
	scanf("%d %d", &A, &B);
	if (B>=0&&B<=2){
		printf("nova\n");
	}else if (B>=3&&B<=96&&B>A){
		printf("crescente\n");
	}else if (B>=97&&B<=100){
		printf("cheia\n");
	}else if (B<=96&&B>=3&&B<A){
		printf("minguante\n");
	}	
	return 0;
}
