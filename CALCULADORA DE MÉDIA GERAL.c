#include <stdio.h>
#include <stdlib.h>

int main(){
//Atribui��o de valores
    char nome [40];
    float nota1;
    float nota2;
    float media,soma,mediaG;
//Repeti��o 'int'
    int cont;
     for (cont=0; cont<10;cont++){
        printf ("\n Aluno %d: ", (cont+1));
        scanf ("%s", nome);
        printf ("\n Nota 1: ");
        scanf ("%f",&nota1);
        printf ("\n Nota 2: ");
        scanf ("%f",&nota2);
        media = (nota1 + nota2)/2;
//C�lculo da m�dia geral
        soma=soma+media;
     }
     mediaG=soma/2;
     printf("A media geral e: %f",mediaG);

}




