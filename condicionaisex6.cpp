#include <iostream>

int main() {

int ano;

printf("digite o ano: ");
scanf("%d", &ano);
if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
printf("Ano bissexto");
}
else {
    printf("Não é ano bissexto");
}
return 0;

}