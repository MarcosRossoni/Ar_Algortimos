	 #include <stdio.h>
	 #include <conio.h>
	 #include <stdlib.h>
	 
	 struct registro {
			int data[3];
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
		int rep;
		int d;
	
		do{
		
			for (i = 0; i <= 4; i++) {
				for (d = 0; d <= 2; d++){
					if (d == 0){
						printf("\nInforme o dia de nascimento: ");
						scanf("%d",&registro[i].data[0]);
					} 
					if(d == 1){
						printf("\nInforme o mes de nascimento: ");
						scanf("%d",&registro[i].data[1]);
					}
					if(d == 2){
						printf("\nInforme o ano de nascimento: ");
						scanf("%d",&registro[i].data[2]);
					}
				}
				
				printf("\nDigite o Codigo do Cliente: ");
				scanf("%d",&registro[i].cod);
						
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
				printf(" \n Vencimento %d/%d/%d", registro[i].data[0], registro[i].data[1], registro[i].data[2]);
				printf(" \n O Codigo do Cliente: %d ", registro[i].cod);
		    	printf(" \n O Nome do Cliente: %s ", registro[i].nome);
		    	printf(" \n O Endereco do cliente: %s ", registro[i].end);
		    	printf(" \n O Sexo do cliente: %s ", registro[i].sexo);
		    	printf(" \n O Valor da divida do cliente: %0.2f ", registro[i].vldivida);
		    	printf(" \n A Idade do cliente: %d ", registro[i].idade);
		    	printf(" \n O Status do cadastro do cliente: %s ", registro[i].end);
		    	printf(" \n ------------------------------------------------------------------------------------------------\n");
			}
			 
			printf("\nPara realizar novos cadastros digite 1, para encerrar precione qualquer tecla: \n");
			scanf("%d",&rep);
			
			if (rep == 1) {
				system("cls");
			}	
		}while(rep == 1);
		
		printf("\n\nSistema encerrado com sucesso, precione ENTER para fechar.");
		
		return(0);	  
	 }
