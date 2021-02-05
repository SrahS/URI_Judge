#include<bits/stdc++.h>

void biblioteca(int *, int);

int main()
{
    int n, i;
    while(scanf("%d", &n) != EOF)
    {
        int v[n];

        for(i = 0; i < n; i++)
            scanf("%d", &v[i]);
        biblioteca(v, n);

        for(i = 0; i < n; i++)
            printf("%04d\n", v[i]);
    }

    return 0;
}

void biblioteca(int *v, int n)
{
    int i, j, aux, menor;

    for(i = 0; i < n; i++)
    {
        menor = i;
        for(j = i+1; j < n; j++)
            if(v[j] < v[menor])
                menor = j;

        aux = v[i];
        v[i] = v[menor];
        v[menor] = aux;
    }
}
