#include <stdio.h>

int main() {
    int num, num2, bits;
    unsigned int mask;
    char c;

    printf("Введите положительное число: ");
    scanf("%u", &num);

    printf("Введите положительное число для замены 3(третьего) байта: ");
    scanf("%u", &num2);

    mask = 1 << (sizeof(num) * 8 - 1);
    bits = sizeof(num) * 8;

    num2 = (num2 << 16) & (0xFF << 16);

    num = (num & 0xFF00FFFF) | num2;

    for (int i = 0; i < bits; i++) {
        c = (num & mask) ? 1 : 0;
        printf("%u", c);
        mask >>= 1;
    }
    printf("\n");

    return 0;
}