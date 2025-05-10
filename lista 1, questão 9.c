#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    float media, variancia, desvio;

    printf("Digite um numero: ");
    scanf("%f", &a);

    printf("Digite um numero: ");
    scanf("%f", &b);

    printf("Digite um numero: ");
    scanf("%f", &c);

    printf("Digite um numero: ");
    scanf("%f", &d);

    media = (a + b + c + d) / 4.0;

    variancia = ((pow(a - media, 2) + pow(b - media, 2) + pow(c - media, 2) + pow(d - media, 2)) / 4.0);

    desvio = sqrt(variancia);

    printf("A media aritmetica eh: %.2f\n", media);
    printf("A variancia eh: %.2f\n", variancia);
    printf("A desvio padrao eh: %.2f\n", desvio);

    return 0;
}
