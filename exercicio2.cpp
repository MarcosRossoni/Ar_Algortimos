#include <stdio.h>
#include <conio.h>

int main(){
    float altura, peso_i;
    char sexo;

    printf("Qual o seu sexo? Digite M para Maculino ou F para Feminino: ");
    sexo = getche();

    printf("\n\nDigite a sua altura: ");
    scanf("%f", &altura);
    
    switch (sexo) {
        case 'M': {
            peso_i = (450.7 * altura) / 10;
            printf("\n\nSeu peso ideal e: %.2f", peso_i);
            break;            
        }
        case 'm': {
            peso_i = (450.7 * altura) / 10;
            printf("\n\nSeu peso ideal e: %.2f", peso_i);
            break;  
        }
        case 'F': {
            peso_i = (400.7 * altura) / 10;
            printf("\n\nSeu peso ideal e: %.2f", peso_i);
            break;
        }
        case 'f': {
            peso_i = (400.7 * altura) / 10;
            printf("\n\nSeu peso ideal e: %.2f", peso_i);
            break;
        }
    } 
    return(0);
}