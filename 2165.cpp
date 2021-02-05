#include<bits/stdc++.h>
int main ()
{
    int x;
    char T[500];
    scanf("%[^\n]",T);
    x=strlen(T);
    if(x<=140)
        printf("TWEET\n");
    else
        printf("MUTE\n");
    return 0;
}
