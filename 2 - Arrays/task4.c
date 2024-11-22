#include <stdio.h>

int main() {
    int N, t = 1;

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

    for (int turn = 0; turn < (N + 1) / 2; turn++) {
        for (int i = turn; i < N - turn; i++) {
            matrix[turn][i] = t++;
        }

        for (int i = turn + 1; i < N - turn; i++) {
            matrix[i][N - turn - 1] = t++;
        }

        for (int i = N - turn - 2; i >= turn; i--) {
            matrix[N - turn - 1][i] = t++;
        }

        for (int i = N - turn - 2; i > turn; i--) {
            matrix[i][turn] = t++;
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