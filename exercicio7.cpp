#include <stdio.h>
#include <locale.h>

int main(){
	int x, vet[10], maior, menor;
	
	for (x = 0; x <= 9; x++){
		printf("Digite o valor para a posicao %d: ", x);
		scanf("%i", &vet[x]);
		
		if(vet[x] > maior){
			maior = vet[x];
		
		} else {
			if(vet[x] < menor && vet[x] > 0){
				menor = vet[x];
			}
		}
	}
	printf("\nO maior valor e %d \n", maior);
	printf("\nO menor valor e %d \n", menor);
	printf("\nA posicao de cada numero e \n", menor);
	
	for(x = 0; x <= 9; x++){
		setlocale(LC_ALL,"");
		printf("\n %d: %d", x, vet[x]);
	}
}
