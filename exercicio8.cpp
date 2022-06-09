#include <stdio.h>
#include <locale.h>

int main(){
	int mat[4][5], L, C, i, soma_col, soma_total;
	
	soma_total = 0;
	
	for (L = 0; L <= 3; L++) {
		soma_col = 0;
		for(C = 0; C <= 4; C++){
		
			printf("Digite o valor da linha %i e da coluna %i: ", L, C);
			scanf("%i", &mat[L][C]);
			soma_col = soma_col + mat[L][C];
		}
		soma_total = soma_total + soma_col;
		printf("\nA soma dessa coluna e %i\n\n", soma_col);		
	}
	printf("\nA soma total das colunas e %i\n\n", soma_total);
	
	return(0);
	
}
