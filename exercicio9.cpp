 #include <stdio.h>
 #include <conio.h>
 
 struct registro {
 		int cod;
		char nome[50];
		char end[50];
		char sexo[10];
		float vldivida;
		int idade;
		char status[10];
	} registro[5];
 
 int main(){
	
	int i;
	
	for (i = 0; i <= 4; i++) {
		registro[i].cod = registro[i].cod++;
				
		printf("\nNome do Cliente: ");
		scanf("%s",registro[i].nome);
		
		printf("\nEndereco do Cliente: ");
		scanf("%s",registro[i].end);
		
		printf("\nSexo: ");
		scanf("%s",registro[i].sexo);
		
		printf("\nValor da Divida: ");
		scanf("%f",&registro[i].vldivida);
		
		printf("\nIdade do Cliente: ");
		scanf("%d",&registro[i].idade);
		
		printf("\nStatus ativo ou inativo: ");
		scanf("%s",registro[i].status);
		
		printf("\n---------------------------------------------------------------------------------------------------\n");
		
	}
	
	for(i = 0; i <= 4; i++){
		printf(" \n O código do Cliente: %d ", registro[i].cod);
    	printf(" \n O nome do Cliente: %s ", registro[i].nome);
    	printf(" \n O Endereco do cliente: %s ", registro[i].end);
    	printf(" \n ------------------------------------------------------------------------");
	}
	
	 
	
	return(0);
	
	  
 }
