#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    char nome[5][250];
    int idade[5],maiorIdade,menorIdade;
    float peso[5],maiorPeso,menorPeso;
    float altura[5],maiorAltura,menorAltura;

maiorIdade=0;
menorIdade=100;

maiorPeso=0;
menorPeso=100;

maiorAltura=0;
menorAltura=100;

    for (i = 0; i < 5; i++){
        printf("%d Nome:", i + 1);
        fgets(nome[i],250,stdin);


        printf("Idade:");
        scanf("%d", &idade[i]);

        maiorIdade= idade[i] > maiorIdade ? idade[i] : maiorIdade;
        menorIdade= idade[i] < menorIdade ? idade[i] : menorIdade;

        printf("Peso:");
        scanf("%f",&peso[i]);
        maiorPeso= peso[i] > maiorPeso ? peso[i] : maiorPeso;
        menorPeso= peso[i] < menorPeso ? peso[i] : menorPeso;

        printf("Altura:");
        scanf("%f",&altura[i]);

        maiorAltura= altura[i] > maiorAltura ? altura[i] : maiorAltura;
        menorAltura= altura[i] < menorAltura ? altura[i] : menorAltura;



        fflush(stdin);
        //setbuf(stdin,NULL);
        printf("\n");
    }

system("cls || clear");

    for(i=0;i<5;i++){

        printf("______________________________\n");
        printf("Nome:%s\n",nome[i]);
        printf("Idade:%d\n",idade[i]);
        printf("Peso:%.2fKg\n",peso[i]);
        printf("Altura:%.2fm\n",altura[i]);

        printf("\n");
    }

    printf("______________________________\n");
    printf("Maior Idade:%d\n",maiorIdade);
    printf("Menor Idade:%d\n",menorIdade);
    printf("______________________________\n");
    printf("Maior Peso:%.2fKg\n",maiorPeso);
    printf("Menor Peso:%.2fKg\n",menorPeso);
    printf("______________________________\n");  
    printf("Maior Altura:%.2fm\n",maiorAltura);
    printf("Menor Altura:%.2fm\n",menorAltura);
    printf("______________________________\n");


    return 0;
}