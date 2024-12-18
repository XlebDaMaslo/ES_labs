#include <stdio.h>

int main() {
    int N;

    printf("Введите N (количество строк и столбцов квадратной матрицы): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Ошибка: введите положительное целое число для N.\n");
        return 1;
    }

    if (N > 100) {
        printf("Ошибка: N не больше 100.\n");
        return 1;
    }

    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j >= i) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = 0;
            }

            // По примеру
            // if (i+j >= N-1){
            //     matrix[i][j] = 1;
            // } else {
            //     matrix[i][j] = 0;
            // }
        }
    }

    printf("Вывод матрицы: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}