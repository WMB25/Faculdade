#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Insartion_Sort(int ary[], int size) {
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
	



int main() {
	//Função Insertion Sort
	srand(time(NULL));
	int	Size = 6;
	int Ary[6];

	for (int i = 0; i < Size; i++) {
		Ary[i] = ( rand() % 90 ) + 10;
		printf("%d ", Ary[i]);
	}

	Insartion_Sort(Ary, Size);
	printf("\n\n");
	for (int i = 0; i < Size; i++) {
		printf("%d ", Ary[i]);
	}
	printf("\n\n");
	return 0;
}