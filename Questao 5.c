#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha,i=0,j;
    int soma=0,somaFinal=0;
    char nomeProduto[50][250];
    float precoProduto[250];
    int quantidadeProduto[250];

    do{
        fflush(stdin);
        printf("Digite:\n");
        printf("1 | para adicionar produto\n");
        printf("2 | para encerrar e mostrar os produtos adicionados\n");
        scanf("%d",&escolha);

        switch(escolha){

            case 1:
            fflush(stdin);
            printf("Nome do Produtor:");
            fgets(nomeProduto[i],250,stdin);

            printf("Preco do Produto:");
            scanf("%f",&precoProduto[i]);

            printf("Quantidade do Produto:");
            scanf("%d",&quantidadeProduto[i]);
            i++;
        
            soma=precoProduto*quantidadeProduto;
            somaFinal+=soma;

                break;
            case 2:

            for(j=0;j<i;j++){

                printf("Nome Do Produto:%s\n",nomeProduto[j]);
                printf("Preco Produto:%.2f\n",precoProduto[j]);
                printf("Quantidade do Produto:%d\n",quantidadeProduto[j]);

            }
            break;

        }


    } while (escolha != 2);

    return 0;
}