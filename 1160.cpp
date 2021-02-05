#include<bits/stdc++.h>
int main()
 {
     int n, c, m;
     int a, b;
     double xu, xa;
     scanf("%d", &n);
     for(m=1; m<=n; m++)
     {
         c = 0;
         scanf("%d %d %lf %lf", &a, &b, &xu, &xa);
         do
         {
             a *= (xu / 100.0) + 1.0;
             b *= (xa / 100.0) + 1.0;
             c++;
             if (c > 100)
             {
                 printf("Mais de 1 seculo.\n");
                 break;
             }
         }while(a <= b);
         if (c <= 100)
             printf("%d anos.\n", c);
     }
     return 0;
 }
