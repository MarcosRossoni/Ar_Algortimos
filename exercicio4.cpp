#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont;
    float x, soma;

    cont = 1;
    soma = 0;

    while (cont <= 20) {
        printf("\nDigite o proximo numero a ser somado: ");
        scanf("%f", &x);

        soma = soma + x;
        cont = cont + 1;
    }

    printf("\nSoma dos elementos da sequencia: %10f\n", soma);
    system("pause");
    return 0;
}
