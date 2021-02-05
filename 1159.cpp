#include<bits/stdc++.h>
int main()
{
    int x,i,f=0,j=0;
    do
    {
        j=f=0;
        scanf("%d",&x);
        if(x%2==0&&x!=0)
        {
            for(i=x; i<=x+8; i+=2)
            {
                j+=i;
            }
            printf("%d\n",j);

        }
        else if(x%2!=0&&x!=0)
        {
            for(i=x+1; i<=x+9; i+=2)
            {
                f+=i;
            }
            printf("%d\n",f);

        }

    }
    while(x!=0);

    return 0;
}
