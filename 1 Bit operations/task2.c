#include <stdio.h>

int main() {
    int num;
    unsigned int mask;
    char c;

    printf("Введите отрицательное число: ");
    scanf("%d", &num);

    printf("%ld\n", (sizeof(num) * 8 - 1));

    mask = 1 << (sizeof(num) * 8 - 2);

    for (int i = 0; i < sizeof(num) * 8 - 1; i++) {
        c = (num & mask) ? 1 : 0;
        printf("%u", c);
        mask >>= 1;
    }
    printf("\n");

    return 0;
}