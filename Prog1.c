#include <stdio.h>

int main() {

/* Variáveis */
int r, d, s;

/* Inputs e Outputs */
printf("Introduza o total de receitas em um mês?: \n");
scanf("%d", &r);
printf("Introduza o total de despesas em um mês?: \n");
scanf("%d", &d);

/* Cálculos */
s = r - d;

/* Resultado */
printf("O seu saldo é de %d \n", s);
return 0;
}
