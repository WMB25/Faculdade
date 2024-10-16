#include <stdio.h>

void bubble_sort_Ary_one(int array[], int num) {
	int compara;
	for (int i = 0; i < num ; i++) {
		for (int j =  0; j < num - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				compara = array[j];
				array[j] = array[j + 1];
				array[j + 1] = compara;
			}
		}
	}
}
void bubble_sort_ary_twoBetter(int array[], int size) {
	int pega, troca;
	for (int i = 0; i < size - 1; i++) {
		troca = 0;
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				pega = array[j + 1];
				array[j] = array[j + 1];
				array[j + 1] = pega;
				troca = 1;
			}
		}
		if (troca == 0) {
			break;
		}
	}
}
void bubble_sort_ary_interação(int array[], int size) {
	int pega, troca;
	for (int i = 0; i < size - 1; i++) {
		troca = 0;
		for (int j = 0; j < size - i - 1; j++) {
			if (array[j] > array[j + 1]) {
				pega = array[j + 1];
				array[j] = array[j + 1];
				array[j + 1] = pega;
				troca = 1;
			}
			printf("%d", array[j]);
		}
		printf("%d,\n", array[size - i - 1]);
		if (troca == 0) {
			printf("O array está Ordenado pós a interação %d \n", i + 1);
			break;
		}
	}
}
void bubble_sort_ary_intercao_decrescente(int array[], int size) {
	int pega, troca;
	for (int i = 0; i > size - 1; i++) {
		troca = 0;
		for (int j = 0; j > size - i - 1; j++) {
			if (array[j] < array[j + 1]) {
				pega = array[j + 1];
				array[j] = array[j + 1];
				array[j + 1] = pega;
				troca = 1;
			}
			printf("%d", array[j]);
		}
		printf("%d,\n", array[size - i - 1]);
		if (troca == 0) {
			printf("O array está Ordenado pós a interação %d \n", i + 1);
			break;
		}
	}
}
void imprimir_Array(int array[], int num) {
	for (int i = 0; i < num; i++) {
		printf("A ordenação do Array é: \n");
		printf("%d ", array[i]);
	}
		printf("\n");
}
int main() {

	//EX1
	int array[] = { 2,4,6,10,9,12 }, tamanho = 6;
	//bubble_sort_Ary_one(array, tamanho);
	//imprimir_Array(array, tamanho);

	//EX2
	int arrayTwo[] = { 5, 7, 6, 13, 12, 11 }, tamanhoTwo = 6;
	//bubble_sort_ary_twoBetter(arrayTwo, tamanhoTwo);
	//imprimir_Array(arrayTwo, tamanhoTwo);

	//EX3
	int arrayThree[] = { 8, -8, 64, -20, 3, 1 }, tamanhoThree = 6;
	//bubble_sort_ary_twoBetter(arrayThree, tamanhoThree);
	//imprimir_Array(arrayThree, tamanhoThree);

	//EX4
	//bubble_sort_ary_interação(array, tamanho);
	//imprimir_Array(array, tamanho);

	//EX5
	bubble_sort_ary_intercao_decrescente(array, tamanho);
	imprimir_Array(array, tamanho);
	return 0;
}