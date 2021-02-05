#include<bits/stdc++.h>
int main()
{
	double n1,n2,n3,n4,m,mf,ne;
        scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
	m=(n1*2+n2*3+n3*4+n4*1)/10;
	if(m>=7){
        printf("Media: %.1lf\n",m);
        printf("Aluno aprovado.\n");
    }else if(m<5){
        printf("Media: %.1lf\n",m);
        printf("Aluno reprovado.\n");
    }else if(m>=5&&m<7){
        scanf("%lf",&ne);
        mf=((m+ne)/2);
        if(mf>=5){
            printf("Media: %.1lf\n",m);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1lf\n",ne);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",mf);
        }else if(mf<5){
            printf("Media: %.1lf\n",m);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1lf\n",ne);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",mf);
        }
    }
    return 0;
    }
