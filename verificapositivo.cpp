#include <iostream>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("O número digitando é positivo.\n");
    } else {
        printf("Onúmero digitado não é positivo.\n");
    }

    return 0;
}