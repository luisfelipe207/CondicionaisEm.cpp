#include <iostream>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número digitando é positivo.\n");
    } else {
        printf("O número digitado é ímpar.\n");
    }

    return 0;
}