#include<bits/stdc++.h>
int main(){
	int e,i,H,M,O;
	scanf("%d",&e);
	for(i=0;i<e;i++)
	{
		scanf("%d %d %d",&H,&M,&O);
		
		if(O==1)
		{
			printf("%02d:%02d - A porta abriu!\n",H,M);
		}
		else if(O==0)
		{
			printf("%02d:%02d - A porta fechou!\n",H,M);
		}
	}
	return 0;
}
