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
