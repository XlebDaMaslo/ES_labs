#include <stdio.h>

int main() {
    int num, bits;
    unsigned int mask;
    char c;
    
    printf("Введите положительное число: ");
    scanf("%u", &num);

    for (int i = 0; i < sizeof(num); i++){
        if (num < (2 << (i * 8-1))){
            bits = i * 8;
            mask = 1 << (bits - 1);
            break;
        }
    }

    for (int i = 0; i < bits; i++) {
        c = (num & mask) ? 1 : 0;
        printf("%u", c);
        mask >>= 1;
    }
    printf("\n");

    return 0;
}
