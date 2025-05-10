#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d;
    float media_aritmetica, media_geometrica, media_harmonica;

    printf("Digite o primeiro valor (positivo): ");
    scanf("%f", &a);

    printf("Digite o segundo valor (positivo): ");
    scanf("%f", &b);

    printf("Digite o terceiro valor (positivo): ");
    scanf("%f", &c);

    printf("Digite o quarto valor (positivo): ");
    scanf("%f", &d);

    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        printf("Erro: todos os valores devem ser positivos.\n");
        return 1;
    }

    media_aritmetica = (a + b + c + d) / 4.0;
    media_geometrica = pow(a * b * c * d, 1.0 / 4.0);
    media_harmonica = 4.0 / ((1.0 / a) + (1.0 / b) + (1.0 / c) + (1.0 / d));

    printf("Media aritmetica: %.2f\n", media_aritmetica);
    printf("Media geometrica: %.2f\n", media_geometrica);
    printf("Media harmonica: %.2f\n", media_harmonica);

    return 0;
}
