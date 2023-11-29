#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int i=0, j;
    char nome[50][250];
    int numero[250];
    int escolha;
    int tempo=2;
    

    do{

    printf("Digite:\n");
    printf("1 | para adicionar um numero na agenda\n");
    printf("2 | para encerrar e mostrar a agenda\n");
    scanf("%d",&escolha);
    fflush(stdin);
    //setbuf(stdin,NULL);

        switch (escolha)
        {

        case 1:
            printf("Nome:");
            fgets(nome[i], 250, stdin);
            printf("Numero:");
            scanf("%d",&numero[i]);
            printf("\n");
            i++;
system("cls || clear");
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
            
            default:
            
            system("cls || clear");
            printf("O Numero que voce digitou e invalido\n",(int)time(NULL));
            sleep(tempo);
            system("cls || clear");
            
            break;
            
        }

    } while (escolha != 2);




    return 0;
}