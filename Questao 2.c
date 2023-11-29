#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

int i,j;
char aluno [5][250];
int idade[5];
float nota[5][3];
float somaNota=0;
float media[5];
char resultado[5][250];

    for(i=0;i<5;i++){
        fflush(stdin);
        printf("%d Nome:",i+1);
        fgets(aluno[i],250,stdin);

        printf("Idade:");
        scanf("%d",&idade[i]);

        for(j=0;j<3;j++){
            printf("%d Nota:",j+1);
            scanf("%f",&nota[i][j]);
            somaNota+=nota[i][j];
        }

        media[i]=somaNota/j;

        if(media[i]>=7){
            strcpy(resultado[i],"Aluno Aprovado\n");

        }else if(media[i]<7 && media[i]>=5){
            strcpy(resultado[i],"Aluno em Recuperacao\n");

        }else{
            strcpy(resultado[i],"Aluno Reprovado\n");

        }

        somaNota=0;
        fflush(stdin);
        printf("\n");
        //setbuf(stdin,NULL);

    }   

system("cls || clear");
printf("\n");

    for(i=0;i<5;i++){
        printf("______________________________\n");
        printf("%d Aluno:%s\n",i+1,aluno[i]);
        printf("Idade:%d\n",idade[i]);

        for(j=0;j<3;j++){
            printf("%d Nota:%.2f\n",j+1,nota[i][j]);

        }
        printf("Media:%.2f\n",media[i]);
        printf("Situacao do Aluno:%s\n",resultado[i]);
        printf("______________________________\n");

    }   

    return 0;
}