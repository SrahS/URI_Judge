#include<bits/stdc++.h>
using namespace std;

struct watson
{
    int indice;
    int valor;
};

void BubbleSort (struct watson v[], int t)
{
    int i, j;
    struct watson aux;
    for(i=0; i<t-1; i++)
    {
        for(j=t-1; j>i; j--)
        {
            if (v[j].valor<v[j-1].valor)
            {
                aux= v[j];
                v[j]= v[j-1];
                v[j-1]=aux;
            }
        }
    }
}

main()
{
    struct watson suspeitos[1000];
    int n,i;
    do{
    cin>>n;
    if(n==0) break;
    for(i=0; i<n; i++)
    {
        suspeitos[i].indice=i+1;
        cin>>suspeitos[i].valor;
    }
    BubbleSort(suspeitos,n);
    cout<<suspeitos[n-2].indice<<endl;
    }while(n!=0);
}

