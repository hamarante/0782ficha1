#include <stdio.h>

int main() {
/* Variáveis */
int salario, subsidio, descontos, salarioli;

/* Inputs e Outputs */
printf("Salário ? \n");
scanf("%d", &salario);
printf("Subsidio de Alimentação ? \n");
scanf("%d", &subsidio);
printf("Descontos ? \n");
scanf("%d", &descontos);

/* Cálculos */
salarioli = (salario + subsidio) - descontos;

/* Resultado */
printf("O seu salário líquido é de %d \n", salarioli);


}