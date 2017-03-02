#include <stdio.h>
#include <stdlib.h>

//Estudo de estrutura de decisao em C

int main(int argc, char *argv[]) {
	
	int n;
	int x;
	
	printf("ESTRUTURA DE DECISAO\n");
	
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	
	printf("\nDigite o valor de x: ");
	scanf("%d", &x);
	
	
	/*Estrutura de decisão para saber qual variavel é maior

	if(n>x){
		
		printf("\nn e maior que x!");
		
	}else{
	
		printf("\nx e maior que n!");
		
	} */
	
	
	//Colocar os numeros inseridos pelo usuario em ordem crescente
	if(n==x){
		
			printf("\nOs numeros sao iguais!");
			
	}
	
	else if(n>x){	
	
		printf("\n%d %d", x, n);
		
	}else{
		
		printf("\n%d %d", n, x);

	}
	
	return 0;	
}
