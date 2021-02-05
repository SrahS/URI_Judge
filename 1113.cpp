#include<bits/stdc++.h>
int main()
{
    int ai,ui;
    do
    {
        scanf("%d %d",&ai,&ui);
        if(ai>ui)
            printf("Decrescente\n");
        else if(ui>ai)
            printf("Crescente\n");
    }
        while(ai!=ui);

    return 0;
}
