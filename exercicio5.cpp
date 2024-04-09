#include <iostream>

int main() {
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 10) {
    printf("O número é maior que 10.\n");

    } else if (num == 10) {

    printf("O número é igual a 10.\n");

    } else {

    printf("o número é menor que 10.\n");
    }

    return 0;
}