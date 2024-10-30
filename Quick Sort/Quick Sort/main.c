#include <stdio.h>
#include <stdlib.h>


void troca(int ary1[], int ary2[]) {
	int change = ary1;
	ary1 = ary2;
	ary2 = change;
}

int desfaz_troca(int ary[], int L_menores, int R_maiores) {
	int elemento = ary[R_maiores];
	int i = (L_menores- 1);
	for (int j = L_menores; j <= R_maiores - 1; j++) {
		if (ary[j] <= elemento) {
			i++;
			troca(&ary[i], &ary[j]);
		}
	}
	swapa(ary[i + 1], ary[R_maiores]);
	return (i + 1);
}

void quickSort(int ary[], int L_menores, int R_maiores) {
	if (L_menores < R_maiores) {
		int DT = desfaz_troca(ary, L_menores, R_maiores);
		quickSort(ary, L_menores, DT - 1);
		quickSort(ary, DT + 1, R_maiores);
	}
}

void empressaoAry(int ary[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d", ary[i]);
	}
	printf("\n");
}

int main() {
	int ary[] = { 2, 4, 6, 10, 9, 12 };
	int size = 6;



	quickSort(ary, 0, size - 1);
	empressaoAry(ary, size);

}
