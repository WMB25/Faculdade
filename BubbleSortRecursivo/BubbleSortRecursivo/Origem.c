#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define num 5

void Trocas(int ary[], int i, int j) {
	int troca = ary[i];
	ary[i] = ary[j];
	ary[j] = troca;
}

void BubbleSortRecursivo(int* ary, int n) {
	for (int i = 0; i < n - 1; i++) {
		if (ary[i] > ary[i + 1]) {
			Trocas(ary, i, i + 1);
		}
	}
	if (n > 1) {
		BubbleSortRecursivo(ary, n - 1);
	}
}

void impressao(int ary[], int n) {
	printf("A ordenaçao do Array e: \n");
	for (int i = 0; i < n; i++) {
		printf("%d ", ary[i]);
	}
}


int main() {
	srand(time(NULL));

	int ary[num];
	for (int i = 0; i < num; i++) {
		ary[i] = rand() % 10;
	}
	int n = sizeof(ary) / sizeof(ary[0]);
	BubbleSortRecursivo(ary, n);
	impressao(ary, n);

	int arr[6] = { 3,5,4,6,7,1 };
	int nn = sizeof(arr) / sizeof(arr[0]);
	BubbleSortRecursivo(arr, nn);
	impressao(arr, nn);
	return 0;
}