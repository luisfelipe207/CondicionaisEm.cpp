#include <iostream>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número digitado é negativo ou zero.\n");
    }

    return 0;
}