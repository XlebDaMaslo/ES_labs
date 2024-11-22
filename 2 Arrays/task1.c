#include <stdio.h>

int main() {
    int N, t = 0;

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
            t++;
            matrix[i][j] = t;
        }
    }

    printf("Вывод матрицы: \n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
