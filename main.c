#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declara��o de Vari�veis - N�o faz parte do programa abaixo:
   int valor1 = 3, valor2 = 4;
   float media;

   printf ("===========================================================");
   //Entrada via teclado valor 1
   printf ("\nForneca o Primeiro Valor: ");
   scanf ("%d", &valor1);

   //Entrada via teclado valor 2
   printf ("\nForneca o Segundo Valor: ");
   scanf ("%d", &valor2);

   //C�lculo da m�dia
   media = (valor1 + valor2)/2.0;

   printf("\n A media entre %d e %d = %f", valor1, valor2, media);
   printf ("\n===========================================================");
}

