#include <stdio.h>
#include <stdlib.h>

void Scream(int x, int* ptr);

int main() {

	////Ponteiro:
	//int x = 15; // varialvel.
	//int *ptr = &x; // Ponteiro.
	////ptr = &x; /* Atribuindo valor ao ponteiro!*/
	//Scream(x, ptr);	


	//Alocaçao
	//Malloc
	int* y;
	y = malloca(sizeof(int));
	if (y != NULL) {
		printf("Tudo Certo!\n");
		printf("O valor de y e: %d\n", *y);
		*y = 55;
		printf("O valor atribuido em y e: %d\n", *y);
		printf("O endereco de y e: %p", &y);
	}
	else { printf("O valor esta vazio"); }
	
	


	return 0;
}

void Scream(int x, int* ptr) {
	printf("O valor da variavel x eh	: %d\n", x);
	printf("O endereco da variavel x eh	: %p\n", &x);
	printf("O valor apontado do ptr eh	: %d\n", *ptr); //* Aponta diretamente para o valor dentro do endereço apontado!
	printf("O enderreco apontado do ptr eh	: %p\n", ptr); // Somente o NOME do ponteiro, envolve apenas o endereço que esta sendo apontado!
	printf("O endereco do ptr eh		: %p\n", &ptr); //& Mostra o endereço do Proprio Ponteiro.

}