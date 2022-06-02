#include <stdio.h>

int main() {
    float area, base, altura;
    int repet;
    repet = 1;

    do {
        printf("\n\nDigite o valor da base de um tringulo: ");
        scanf("%f", &base);

        printf("\nDigite o valor da altura de um triangulo: ");
        scanf("%f", &altura);

        area = (base * altura) / 2;
        printf("\nA area deste triangulo e de %0.2f", area);

        repet = repet + 1;
    } while (repet < 7);

    return 0;
}
