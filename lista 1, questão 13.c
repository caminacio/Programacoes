#include <stdio.h>
#include <string.h>

int main() {
    char sexo[10];
    float peso, altura, tmb;
    int idade;

    printf("Informe seu sexo (F para feminino e M para masculino): ");
    scanf("%s", sexo);

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (strcmp(sexo, "M") == 0) {
        tmb = 66.47 + (13.75 * peso) + (5.003 * altura) - (6.755 * idade);
    } else if (strcmp(sexo, "F") == 0) {
        tmb = 655.09 + (9.563 * peso) + (1.85 * altura) - (4.676 * idade);
    } else {
        printf("\nSexo inválido. Use 'M' para feminino ou 'F' para masculino.\n");
        return 1;
    }

    printf("\nSua Taxa Metabólica Basal (TMB) eh: %.2f calorias por dia.\n", tmb);

    return 0;
}
