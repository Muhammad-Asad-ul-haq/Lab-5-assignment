#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);


    for (int i = 0; i < sizeof(num) * 8; i++) {
        count += (num >> i) & 1;
    }

    printf("The number of 1s in the binary representation is: %d\n", count);

    return 0;
}
