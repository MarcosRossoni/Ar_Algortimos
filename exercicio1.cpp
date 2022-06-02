#include <stdio.h>
#include <conio.h>

int main() {
    int l, a, c; 
    float z;

    printf("Entre com valor de L: ");
    scanf("%i", &l);

    printf("Entre com valor de A: ");
    scanf("%i", &a);

    printf("Entre com valor de C: ");
    scanf("%i", &c);

    z = ((l+a) * 2.3) / c;

    printf("O valor de Z = %0.3f", z);

    return 0;
}
