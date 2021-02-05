#include<bits/stdc++.h>
int main()
{
    char s[100];
    int i,n,b;
    scanf("%s",s);
    n=strlen(s);
    for(i=b=0; i<n; i++)
        b+=s[i];
    if(b%2==0)
        printf("%s0\n",s);
    else
        printf("%s1\n",s);
    return 0;
}
