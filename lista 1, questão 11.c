#include <stdio.h>

int main() {
    int a, b, c, cres;

    printf("Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("Digite um numero inteiro: ");
    scanf("%d", &b);

    printf("Digite um numero inteiro: ");
    scanf("%d", &c);

    if (a > b) {
        cres = a;
        a = b;
        b = cres;
    }

    if (a > c) {
        cres = a;
        a = c;
        c = cres;
    }

    if (b > c) {
        cres = b;
        b = c;
        c = cres;
    }

    printf("\nOs numeros em ordem crescente são: %d, %d, %d\n", a, b, c);

    return 0;
}
