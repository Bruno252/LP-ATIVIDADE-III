#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha,i=0,j;
    char nomeProduto[50][250];
    float precoProduto[250];
    int   quantidadeProduto[250];
    float valorProduto[250],valorTotal;

    do {
        fflush(stdin);
        //setbuf(stdin,NULL);
        printf("Digite:\n");
        printf("1 | para adicionar produto\n");
        printf("2 | para encerrar e mostrar os produtos adicionados\n");
        scanf("%d",&escolha);

        switch(escolha) {

        case 1:
            fflush(stdin);
            //setbuf(stdin,NULL);
            printf("\n");
            printf("Nome do Produto:");
            fgets(nomeProduto[i],250,stdin);

            printf("Preco do Produto:");
            scanf("%f",&precoProduto[i]);

            printf("Quantidade do Produto:");
            scanf("%d",&quantidadeProduto[i]);

            valorProduto[i]=precoProduto[i]*quantidadeProduto[i];
            valorTotal+=valorProduto[i]; 
            i++;
            system("cls || clear");
            break;

        case 2:
            system("cls || clear");
            for(j=0; j<i; j++) {
                printf("___________________________________\n");
                printf("Nome Do Produto:%s",nomeProduto[j]);
                printf("Preco Produto:R$%.2f\n",precoProduto[j]);
                printf("Quantidade do Produto:%d\n",quantidadeProduto[j]);
                printf("Valor do Total do Produto:R$%.2f\n",valorProduto[j]);
                printf("___________________________________\n");

            }
            break;
        }

    } while (escolha != 2);

    printf("\nValor Total:R$%.2f",valorTotal);

    return 0;
}