#include<bits/stdc++.h>
int main()
{
    int N,i,j,s=0;
    scanf("%d",&N);
    while(N--)
    {
    char V[1000000];
    scanf(" %s",V);
    for(i=0;i<strlen(V);i++)
    {
        if(V[i]=='1')
            s=s+2;
        else if(V[i]=='2'||V[i]=='3'||V[i]=='5')
            s=s+5;
        else if(V[i]=='4')
            s=s+4;
        else if(V[i]=='6'||V[i]=='9'||V[i]=='0')
            s=s+6;
        else if (V[i]=='7')
            s=s+3;
        else if(V[i]=='8')
            s=s+7;
    }
    printf("%d leds\n",s);
    s=0;
    }
    return 0;
}
