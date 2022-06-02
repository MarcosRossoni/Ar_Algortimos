#include <stdio.h>
#include <conio.h>

int main(){
    float altura, peso_i;
    char sexo[1];

    printf("Qual o seu sexo? Digite M para Maculino ou F para Feminino: ");
    gets(sexo);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    
    if((sexo == "M") || (sexo == "m")) {  
        peso_i = (450.7 * altura) / 10;
        printf("Seu peso ideal e: %.2f", peso_i);
    } if ((sexo == "F") || (sexo == "f")) {
        peso_i = (400.7 * altura) / 10;
        printf("Seu peso ideal e: %.2f", peso_i);
    }
    return(0);
}
