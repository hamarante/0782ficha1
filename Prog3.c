#include <stdio.h>

int main(void) {

/* Variáveis */
float potencia = 5.42;
float consumo;
float preco = 0.16;
float IVA = 0.18;
float total;
float totalIVA;

/* Inputs e Outputs */
printf("Consumo ? \n");
scanf("%f", &consumo);

/* Cálculos */
total =(consumo * preco) + potencia;
totalIVA = total * IVA;

/* Resultado */
printf("O valor a pagar com IVA é de %0.2f € \n", totalIVA);
}