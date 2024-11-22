#include <stdio.h>

int main() {
    int N, t = 0;

    printf("Введите N (количество элементов в матрице): ");
    scanf("%d", &N);

    int matrix[N];

    for (int i = 0; i < N; i++) {
        matrix[i] = i + 1;
    }

    printf("Вывод матрицы: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i]);
    }
    printf("\n");

    for (int i = 0; i < N/2; i++) {
        t = matrix[i];
        matrix[i] = matrix[N - i - 1];
        matrix[N - i - 1] = t;
    }

    printf("Вывод матрицы в обратном порядке: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", matrix[i]);
    }
    printf("\n");

    return 0;
}