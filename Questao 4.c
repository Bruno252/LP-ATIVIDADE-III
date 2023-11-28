#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int numero[5];
    int somaNumero;
    int qntPar=0,qntImpar=0;
    int somaPar=0,somaImpar=0;
    int qntNegativo=0;
    int maiorNumero=INT_MIN,menorNumero=INT_MAX;
    float media,mediaPar;


    for(i=0;i<3;i++){

        printf("Numero:");
        scanf("%d",&numero[i]);
        somaNumero+=numero[i];

        if(numero[i]%2==0){
            qntPar++;
            somaPar+=numero[i];

        }else{
            qntImpar++;
            somaImpar+=numero[i];

        }

        if(numero[i]<0){
            qntNegativo++;

        }

        maiorNumero= numero[i] > maiorNumero ? numero[i] : maiorNumero;
        menorNumero= numero[i] < menorNumero ? numero[i] : menorNumero;
    }


media=somaNumero/i;

    if(qntPar>0){
        mediaPar=somaPar/qntPar;

}

printf("\n");
printf("Quantidades de Numeros Impares:%d\n",qntImpar);
printf("Quantidades de Numeros Negativos:%d\n",qntNegativo);
printf("Maior Numero:%d\n",maiorNumero);
printf("Menor Numero:%d\n",menorNumero);
printf("Media Par:%.2f\n",mediaPar);
printf("Media de Numeros Inseridos:%.2f\n",media);

    return 0;
}
