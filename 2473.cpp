#include<bits/stdc++.h>
int main()
{
    int aposta[6],resultado[6],i,j,soma=0;
    for(i=0; i<6; i++)
    {
        scanf("%d",&aposta[i]);
    }
    for(i=0; i<6; i++)
    {
        scanf("%d",&resultado[i]);
    }
    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(aposta[i]==resultado[j])
            {
                soma++;
            }
        }
    }
    if(soma==3)
        printf("terno\n");
    else if(soma==4)
        printf("quadra\n");
    else if(soma==5)
        printf("quina\n");
    else if(soma==6)
        printf("sena\n");
    else
        printf("azar\n");
    return 0;
}
