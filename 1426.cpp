#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j;

    scanf("%d", &n);


 while(n--)
 {
    int **matriz = (int**) malloc((50)*sizeof(int*));
    
    for(int i = 0 ; i <= 9 ; i++)
    {
      matriz[i] = (int *) malloc((50)*sizeof(int));
    }

  for (i = 0; i < 9; i += 2)
   for (j = 0; j <= (i + 1); j += 2)
    scanf("%d", &matriz[i][j]);

  for (i = 0; i < 8; i += 2)
  {
   for (j = 0; j <= (i + 1); j += 2)
   {
    matriz[i + 2][j + 1] = (matriz[i][j] - matriz[i + 2][j] - matriz[i + 2][j + 2]) / 2;
    matriz[i + 1][j] = matriz[i + 2][j] + matriz[i + 2][j + 1];
    matriz[i + 1][j + 1] = matriz[i + 2][j + 1] + matriz[i + 2][j + 2];
   }
  }

  for (i = 0; i < 9; ++i)
  {
   for (j = 0; j < (i + 1); ++j)
   {
    printf("%d", matriz[i][j]);
    if(j != i) 
     printf(" ");
   }
   printf("\n");
  }
  free(matriz);
 }

 return 0;
}

