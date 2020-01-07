#include <stdio.h>

int main (void) {

/* Variáveis */
char nome [256];
float teste1;
float teste2;
float teste3;
float media;

/* Inputs e Outputs */
printf("Nome do aluno? \n");
scanf(" %s", nome);
printf("Nota do primeiro teste? \n");
scanf(" %f", &teste1);
printf("Nota do segundo teste? \n");
scanf(" %f", &teste2);
printf("Nota do terceiro teste? \n");
scanf(" %f", &teste3);

/* Cálculos */
media = (teste1 * 0.25) + (teste2 * 0.35) + (teste3 * 0.40);

/* Resultado */
printf("Nome: %s \n", nome);
printf("Média: %0.2f \n", media);
}