#include<bits/stdc++.h>

int FSimple (int N);

int main()
{
    int N,a;
    scanf("%d",&N);
    a= FSimple(N);
    printf("%d\n",a);
    return 0;
}

int FSimple (int N)
{
  if(N==0) return 1;
  return N*FSimple(N-1);
}
