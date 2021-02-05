#include <bits/stdc++.h>

using namespace std;

int main()
{

    int **mat,lin[10],linha=0,col[10],cl=0,qq1[10],qdd=0,qtd;
    scanf("%d",&qtd);

    mat = (int **)malloc(100*sizeof(int *));
    for(int i=0; i<100; i++)
    {
        mat[i]=(int *)malloc(100*sizeof(int));
    }

    for(int z=0; z<qtd; z++)
    {

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                scanf("%d",&mat[i][j]);
            }
        }


        linha=0;
        for(int i=0; i<9; i++)
        {
            for(int j=1; j<10; j++)
                lin[j]=0;

            int cont=0;
            for(int j=0; j<9; j++)
            {
                lin[mat[i][j]]++;
            }
            for(int j=1; j<10; j++)
            {
                if(lin[j]==1)
                    cont++;

            }
            if(cont==9)
                linha++;
        }



        cl=0;
        for(int i=0; i<9; i++)
        {
            for(int j=1; j<10; j++)
                col[j]=0;

            int cont=0;
            for(int j=0; j<9; j++)
            {
                col[mat[j][i]]++;
            }
            for(int j=1; j<10; j++)
            {
                if(col[j]==1)
                    cont++;

            }
            if(cont==9)
                cl++;
        }



        qdd=0;



        int cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=0; i<3; i++)
        {

            for(int j=0; j<3; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;



        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=3; i<6; i++)
        {

            for(int j=0; j<3; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;




        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=6; i<9; i++)
        {
            for(int j=0; j<3; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;



        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=0; i<3; i++)
        {
            for(int j=3; j<6; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;




        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=3; i<6; i++)
        {
            for(int j=3; j<6; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;




        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=3; i<6; i++)
        {
            for(int j=6; j<9; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;



        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=6; i<9; i++)
        {
            for(int j=0; j<3; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;



        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=6; i<9; i++)
        {
            for(int j=3; j<6; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;



        cont=0;
        for(int j=1; j<10; j++)
            qq1[j]=0;
        for(int i=6; i<9; i++)
        {
            for(int j=6; j<9; j++)
            {
                qq1[mat[i][j]]++;
            }
        }
        for(int j=1; j<10; j++)
        {
            if(qq1[j]==1)
                cont++;
        }
        if(cont==9)
            qdd++;


        printf("Instancia %d\n",z+1);
        if(qdd==9 && linha==9 && cl==9)
        {
            printf("SIM\n\n");
        }
        else
        {
            printf("NAO\n\n");
        }

    }
    for(int i=0; i<100; i++)
    {
        free(mat[i]);
    }
    free(mat);



    return 0;
}
