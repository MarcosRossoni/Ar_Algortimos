#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float notas(){
	float nota1, nota2, nota3, nota4;
	float med;
	printf("\nInforme a nota 1: ");
	scanf("%f", &nota1);
	printf("\nInforme a nota 2: ");
	scanf("%f", &nota2);
	printf("\nInforme a nota 3: ");
	scanf("%f", &nota3);
	printf("\nInforme a nota 4: ");
	scanf("%f", &nota4);
	med = (nota1 + nota2 + nota3 + nota4)/4;
	return(med);
}

float resultado (float med){
	printf("\nA media do aluno e: %0.2f", med);
	if (med >= 6.0){
		printf("\nAluno Aprovado");
	}else {
		printf("\nAluno Reprovado");
	}
}

int main(){
	float retorno;
	char sim_nao;
	do{
		retorno = notas();
		resultado(retorno);
		printf("\n\nDeseja realizar novo cadastro, digite S para sim e N para nao: ");
		fflush(stdin);
		sim_nao = getch();
		
		if ((sim_nao == 's') || (sim_nao == 'S')){
			system("cls");
		}
	} while((sim_nao == 's') || (sim_nao == 'S'));
	
	printf("\n\nFim do programa...");
	getche();
	return(0);
}
