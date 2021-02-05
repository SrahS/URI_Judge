#include<bits/stdc++.h>
int main(){
    int I,A,M,D,RA;
    scanf("%d",&I);
    A=I/365;
    RA=I%365;
    M=RA/30;
    D=RA%30;
    printf("%d ano(s)\n",A);
    printf("%d mes(es)\n",M);
    printf("%d dia(s)\n",D);
    return 0;
}
