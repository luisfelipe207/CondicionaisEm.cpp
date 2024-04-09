#include <iostream>

int main() {
    int num1, num2, num3;

    printf("Digite um número: ");
    scanf("%d", &num1);
    printf("Digite um número: ");
    scanf("%d", &num2);
    printf("Digite um número: ");
    scanf("%d", &num3);

    if (num1 + num2 <= num3) {
    printf("O triangulo é equilátero.\n");
    }
    else if (num1 + num3 == num2) {
    printf("O triangulo é Isósceles\n");
    }
    else if (num2 + num3 <= num1) {
    printf("O triangulo é escaleno.\n");
    }
    else {
        printf("O triângulo é equilátero se todos os lados forem iguais.\n"); 
    }
    return 0;
}