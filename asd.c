#include <stdio.h>
#include <math.h>
#define ex2
#ifdef ex1

int main()
{
    float a,b,c,delta,sqrtdelta,raiz1,raiz2;
    printf("Digite o valor de a:\n");
    do
    {
        scanf("%f",&a);
        if(a==0)
        {
            printf("Desculpe, esse valor e invalido, por favor digite novamente.\nDigite o valor de a:");
        }
    }
    while(a==0);
    printf("Digite o valor de b:\n");
    scanf("%f",&b);
    printf("Digite o valor de c:\n");
    scanf("%f",&c);

    delta=(b*b)-4*a*c;
    if(delta<0)
    {
        printf("Não ha raizes reais.");
    }

    sqrtdelta=sqrt(delta);
    raiz1=(-b+sqrtdelta)/(2*a);
    raiz2=(-b-sqrtdelta)/(2*a);
    if(raiz1<0){
        printf("a primeira raiz nao e real\n");
        printf("%.2f",raiz2);
    }else if(raiz2<0){
        printf("%.2f\n",raiz1);
        printf("a segunda raiz nao e real");
    }else{
    printf("%.2f\n",raiz1);
    printf("%.2f",raiz2);
    }
    return 0;
}

#endif ex1

#ifdef ex2

int main()
{

    int nivel;
    float salario,hra,hr;

    printf("Escolha o seu nivel:\n1-Professor nivel 1\n2-Professor nivel 2\n3-Professor nivel 3\n");
    scanf("%d",&nivel);

    if(nivel==1)
    {
        hra == 55;
    }
    if(nivel==2)
    {
        hra == 67;
    }
    if(nivel==3)
    {
        hra == 78;
    }
    printf("Digite quantas horas de trabalho voce teve:\n");
    do
    {
        scanf("%f",&hr);
        if(hr<=0)
        {
            printf("Quantidade de horas incorreto, favor digitar novamente:\n");
        }
    }
    while(hr<=0);
    salario = hra* hr;
    printf("O salario do professor e igual a: %.2f", salario);
    return 0;
}
#endif ex2

#ifdef ex3
main(){
int loop = 1;
int diaA =0, mesA=0, anoA=0;
int diaN=0, mesN=0, anoN=0;
int nascBi = 0, atualBi = 0;
int mesNPar = 0, mesAPar = 0;
int fevN = 0, fevA = 0;

	while(loop == 1){
        diaA =0, mesA=0, anoA=0;
        diaN=0, mesN=0, anoN=0;
        nascBi = 0, atualBi = 0;
        mesNPar = 0, mesAPar = 0;
        fevN = 0, fevA = 0;
        while(anoN == 0){
            printf("Digite o ano do seu nascimento: ");
            scanf("%i", &anoN);
            }

        if (anoN % 4 == 0){
            printf("VOCE NASCEU EM ANO BISSEXTO!!\n");
            nascBi = 1;
        }

        while(mesN < 1 || mesN >12){
            printf("Digite o mes do seu nascimento: ");
            scanf("%i", &mesN);
        }

        if (mesN == 1 ||mesN == 3 || mesN == 7 ||mesN == 8 ||mesN == 10 ||mesN == 12){
            printf("31 dias\n");
            mesNPar = 1;
        }
        if (mesN == 2){
            fevN =- 2;
        }
        while(diaN < 1 || diaN > (30+fevN+mesNPar+nascBi)){
        printf("Digite o dia do seu nascimento: ");
        scanf("%i", &diaN);
        }

       while(anoA == 0){
            printf("Digite o ano atual: ");
            scanf("%i", &anoA);
            }

        if (anoA % 4 == 0){
            printf("ESTAMOS EM ANO BISSEXTO!!\n");
            atualBi = 1;
        }

        while(mesA < 1 || mesA >12){
            printf("Digite o mes atual : ");
            scanf("%i", &mesA);
        }

        if (mesA == 1 ||mesA == 3 || mesA == 7 ||mesA == 8 ||mesA == 10 ||mesA == 12){
            printf("31 dias\n");
            mesAPar = 1;
        }

        if (mesA == 2){
            fevA = -2;
        }
        while(diaA < 1 || diaA > (30+fevA+mesAPar+atualBi)){
        printf("Digite o dia atual: ");
        scanf("%i", &diaA);
        }

        if( (diaA - diaN) < 1){
            diaA += (30 + mesAPar+mesNPar);
            mesA -1;
        }
/*            if( (mesA - mesN) < 1){
            diaA + 30;
            mesA -1;
        }
*/
        printf("TOMA \n");
        printf("Voce tem %i dias, %i meses e %i anos", diaA-diaN,mesA-mesN,anoA-anoN);

        printf("\n1 para fazer denovo\n");
        scanf("%i", &loop);
    }
}
#endif

