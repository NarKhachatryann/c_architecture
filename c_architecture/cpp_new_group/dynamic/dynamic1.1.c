/* 
Իրականցնել ծրագիր, որը NxM (N քանակությամբ տող և M 
քանակությամբ սյուն) չափանի դինամիկ մատրիցի ցանկացած տողի 
մեծագույն արժեքների համար կստեղծի միաչափ դինամիկ զանգված։
Այսինքն միաչափ զանգվածի i ինդեքսի էլեմենտի արժեքը հավասար է 
լինելու մատրիցի i ինդեքսի տակ գտնվող տողի (միաչափ զանգվածի) 
մեծագույն արժեքին։
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size1 = 0, size2 = 0;
    printf("Enter the size of the matrix (N M): ");
    scanf("%d %d", &size1, &size2);

    int* arr = (int*)malloc(size1 * sizeof(int));
    int** matrix = (int**)malloc(size1 * sizeof(int*));
    for(int i = 0; i < size1; i++) {
        matrix[i] = (int*)malloc(size2 * sizeof(int));
    }

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < size1; i++) {
        for(int j = 0; j < size2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < size1; i++) {
        int max = matrix[i][0];
        for(int j = 1; j < size2; j++) {
            if(matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        arr[i] = max;
    }

    for(int i = 0; i < size1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    for(int i = 0; i < size1; i++) {
        free(matrix[i]);
    }
}