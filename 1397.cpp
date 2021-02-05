    #include <bits/stdc++.h>
    int main ()
    {
    	int p,a,b,x,y,q,i;
    	scanf("%d",&p);
    	while(p!=0)
    	{
    		x=0;
    		y=0;
    		q=0;
    		for(i=0;i<p;i++)
    		{
    			scanf("%d %d",&a,&b);
    			if(a>b)
    				x++;
    			if(b>a)
    				y++;
    			else if(a==b)
    				q++;
    		}
    		printf("%d %d\n",x,y);
    		scanf("%d",&p);
    	}
    	return 0;
    }
