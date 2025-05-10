#include <stdio.h>

int main() {
    float valor1, valor2, valor3;
    float media;

    printf("Digite um valor: ");
    scanf("%f", &valor1);

    printf("Digite um valor: ");
    scanf("%f", &valor2);

    printf("Digite um valor: ");
    scanf("%f", &valor3);

    media = (valor1 + valor2 + valor3) / 3;

    printf("\nA media aritmetica dos tres valores eh: %.2f\n", media);

    return 0;
}

