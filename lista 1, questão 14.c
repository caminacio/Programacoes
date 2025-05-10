#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\nA tabuada do %d eh\n:", numero);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
