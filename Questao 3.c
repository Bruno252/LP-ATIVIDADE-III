#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i=0, j;
    char nome[50][250];
    int numero[250];
    int escolha;


    do{

    printf("Digite:\n");
    printf("1 | para adicionar um numero na agenda\n");
    printf("2 | para encerrar e mostrar a agenda\n");
    scanf("%d",&escolha);
    fflush(stdin);
    setbuf(stdin,NULL);
    
        switch (escolha)
        {

        case 1:
            printf("\n");
            printf("Nome:");
            fgets(nome[i], 250, stdin);
            printf("Numero:");
            scanf("%d",&numero[i]);
            printf("\n");
            i++;

            break;

        case 2: 
            system("cls || clear");
            printf("Contatos:\n\n");
            for(j=0;j<i;j++){

                printf("Nome:%s",nome[j]);
                printf("Numero:%d\n",numero[j]);
                printf("\n");

            }

            break;

        }

    } while (escolha != 2);




    return 0;
}