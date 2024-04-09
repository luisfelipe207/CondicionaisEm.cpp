#include <iostream>

int main() {
    int num1, num2;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);
    

    if (num1 + num2) {
    printf("Qual o resultado da soma");
    }
    else if (num1 - num2) {
    printf("Qual o resultado da subtração");
    }
    else if (num1 * num2) {
    printf("Qual multiplicação do resltado");
    }
    else if (num1 / num2) {
    printf("Qual o resultado da divisão");
    }
    else {}       

    return 0;
}