#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void C_Insartion_Sort(int ary[], int size) {
	for (int i = 1; i < size; i++) {
		int pega = ary[i];
		int troca = i - 1;

		while (troca >= 0 && ary[troca] > pega) {
			ary[troca + 1] = ary[troca];
			troca = troca - 1;
		}
		ary[troca + 1] = pega;
	}
}
void D_Insartion_Sort(int ary[], int size) {
	for (int i = 1; i < size; i++) {
		int pega = ary[i];
		int troca = i - 1;

		while (troca >= 0 && ary[troca] < pega) {
			ary[troca + 1] = ary[troca];
			troca = troca - 1;
		}
		ary[troca + 1] = pega;
	}
}
void impressao(int ary[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", ary[i]);
	}
}

int main() {
	//Função Insertion Sort
	srand(time(NULL));
	//variaveis e array
	int	size = 6;
	int Ary[6];
	int ary_one[] = { 2, 4, 6, 10, 9, 12 };
	int ary_two[] = { 5, 7, 6, 13, 12, 11 };
	int ary_three[] = { 8, -8, 64, -20, 3, 1 };

	printf("Array aleatorio desordenado: ");
	for (int i = 0; i < size; i++) {
		Ary[i] = (rand() % 90) + 10;
		printf("%d ", Ary[i]);
	}
	printf("\n\n");

	C_Insartion_Sort(Ary, size);
	impressao(Ary, size);
	printf("\n\n");

	C_Insartion_Sort(ary_one, size);
	impressao(ary_one, size);
	printf("\n\n");


	C_Insartion_Sort(ary_two, size);
	impressao(ary_two, size);
	printf("\n\n");


	C_Insartion_Sort(ary_three, size);
	impressao(ary_three, size);
	printf("\n\n");

	D_Insartion_Sort(Ary, size);
	impressao(Ary, size);
	printf("\n\n");



	return 0;
}