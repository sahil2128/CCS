#include "pseudo_linguagem.h"


ALGORITMO

inicio
   float nota1, nota2, media;
   escreva("\n DIGITE AS DUAS NOTAS: ");
   leia("%f %f",&nota1 , &nota2);
   media = (nota1 + nota2) / 2;
   escreva("\n A Media entre %f e %f = %f \n",
          nota1, nota2, media);
   quase_acabando  ; // prepare-se e
fim  // FIM
