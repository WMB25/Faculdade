#include <stdio.h>
#include <stdlib.h>

// Separação do Array!
void merge_C(int ary[], int left, int middle, int right, int ORD) {
    int num_Left = middle - left + 1;
    int num_Right = right - middle;

    // Aloca memória para os arrays temporários
    int* leftArr = (int*)malloc(num_Left * sizeof(int));
    int* rightArr = (int*)malloc(num_Right * sizeof(int));

    // Separaçao dos valores!
    for (int i = 0; i < num_Left; i++)
        leftArr[i] = ary[left + i];
    for (int j = 0; j < num_Right; j++)
        rightArr[j] = ary[middle + 1 + j];

    int i = 0, j = 0, k = left;

    // remonta o array (ordem!)
    if(ORD == 1){
        while (i < num_Left && j < num_Right) {
            if (leftArr[i] <= rightArr[j]) {
                ary[k] = leftArr[i];
                i++;
            }
            else {
                ary[k] = rightArr[j];
                j++;
            }
            k++;
        } 
    }
    else if( ORD == 2) {
        while (i < num_Left && j < num_Right) {
            if (leftArr[i] >= rightArr[j]) {
                ary[k] = leftArr[i];
                i++;
            }
            else {
                ary[k] = rightArr[j];
                j++;
            }
            k++;
        }
    }

    // Copia os elementos restantes de leftArr, se houver algum
    while (i < num_Left) {
        ary[k] = leftArr[i];
        i++;
        k++;
    }

    // Copia os elementos restantes de rightArr, se houver algum
    while (j < num_Right) {
        ary[k] = rightArr[j];
        j++;
        k++;
    }

    // Libera a memória alocada
    free(leftArr);
    free(rightArr);
}

// Função principal do Merge Sort
void mergeSort(int ary[], int left, int right, int ORD) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Ordena a primeira e a segunda metade
        mergeSort(ary, left, middle, ORD);
        mergeSort(ary, middle + 1, right, ORD);

        if(ORD == 1){
        // Mescla as duas metades
        merge_C(ary, left, middle, right, ORD);
        }
    }
}

// Função para imprimir o array
void printAry(int ary[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", ary[i]);
    printf("\n");
}

int main() {
    int ary[] = { 2, 4, 6, 10, 9, 12 };
    int aryTwo[] = { 5, 7, 6, 13, 12, 11 };
    int aryThree[] = { 8, -8, 64, -20, 3, 1 };
    int size = 6, ORD;

    while (1) {
        printf(" Digite a ordem,  1 para Crescente, 2 para Decrescente: ");
        scanf_s("%d", &ORD);
        if (ORD == 1 || ORD == 2) {
            printf("Array :\n");
            printAry(ary, size);

            mergeSort(ary, 0, size - 1, ORD);

            printf("Array ordenado:\n");
            printAry(ary, size);
        }
        else {
            printf("Digite o valor da ordem valido!");
        }
    }
    return 0;
}
