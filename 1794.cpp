#include<bits/stdc++.h>
int main(){
	int N,LA,LB,SA,SB;
	scanf("%d%d%d%d%d",&N,&LA,&LB,&SA,&SB);
	if(N>=LA&&N<=LB&&N>=SA&&N<=SB)
		printf("possivel\n");
	else
		printf("impossivel\n");
	return 0;
}
