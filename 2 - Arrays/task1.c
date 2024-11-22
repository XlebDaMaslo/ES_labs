#include <stdio.h>

int main() {
    int N, t = 0;

    printf("Введите количество строк и столбцов квадратной матрицы: ");
    scanf("%d", &N);

    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            t++;
            matrix[i][j] = t;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
