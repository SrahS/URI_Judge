#include<bits/stdc++.h>
int main()
{
	int n,r,i;
	scanf("%d",&n);
	while(n!=0)
	{
		int joao=0,maria=0;
		for(i=1;i<=n;i++)
		{
			scanf("%d",&r);
			if(r==0)
			maria++;
			else
			joao++;
		}
		printf("Mary won %d times and John won %d times\n",maria,joao);
		scanf("%d",&n);
	}
	return 0;
}
