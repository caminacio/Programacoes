#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    char alfa[100];

    printf("Digite uma string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Digite uma string: ");
    fgets(str2, sizeof(str2), stdin);

    printf("Digite uma string: ");
    fgets(str3, sizeof(str3), stdin);

    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;
    str3[strcspn(str3, "\n")] = 0;

    if (strcmp(str1, str2) > 0) {
        strcpy(alfa, str1);
        strcpy(str1, str2);
        strcpy(str2, alfa);
    }

    if (strcmp(str1, str3) > 0) {
        strcpy(alfa, str1);
        strcpy(str1, str3);
        strcpy(str3, alfa);
    }

    if (strcmp(str2, str3) > 0) {
        strcpy(alfa, str2);
        strcpy(str2, str3);
        strcpy(str3, alfa);
    }

    printf("\nStrings em ordem alfabetica:\n");
    printf("%s\n%s\n%s\n", str1, str2, str3);

    return 0;
}
