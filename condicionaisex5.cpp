#include <iostream>

int main() { 
    float num1, num2;
    int operacao;

    printf("Digite um número: ");
    scanf("%f", &num1);
    printf("Digite um número: ");
    scanf("%f", &num2);
    
    printf("Escolha a operação 2+, 3-, 4*, 5/");
    scanf("%d", &operacao);

    if (operacao == 2) {
    printf("Resultado: %.2f\n", (num1 + num2));
    }
    else if (operacao == 3) {
    printf("Resultado: %.2f\n", (num1 - num2));
    }
    else if (operacao == 4) {
    printf("Resultado: %.2f\n", (num1 * num2));
    }
    else if (operacao == 5) {
    printf("Resultado: %.2f\n", (num1 / num2));
    }
    else {
        printf("Número invalido");
    }
    return 0;
}