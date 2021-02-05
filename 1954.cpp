#include<bits/stdc++.h>
int main(){
    int i,tam;
    char x[1000000];
    scanf("%s",x);
    tam=strlen(x);
    for(i=tam-1;i>=0;i--)
        printf("%c",x[i]);
    printf("\n");
    return 0;
}
