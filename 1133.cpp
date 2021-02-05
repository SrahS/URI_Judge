#include<bits/stdc++.h>

int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    do
    {
        if(x<y)
        {
            for(i=x+1; i<y; i++)
            {
                if(i%5==2||i%5==3)
                    printf("%d\n",i);
            }
        }
        else if(x>y)
        {
            for(i=y+1; i<x; i++)
            {
                if(i%5==2||i%5==3)
                    printf("%d\n",i);
            }
        }
    }
    while(x%5!=0);

    return 0;
}
