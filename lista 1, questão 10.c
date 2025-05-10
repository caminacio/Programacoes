#include <stdio.h>

int main() {
    int a, b, c, maior;

    // Entrada dos 3 números
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    printf("Digite um numero inteiro: ");
    scanf("%d", &c);

    maior = a;

    if (b > maior) {
        maior = b;
    }

    if (c > maior) {
        maior = c;
    }

    printf("\nO maior numero eh: %d\n", maior);

    return 0;
}
