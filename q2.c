#include <stdio.h>

int main() {
    int num;

    printf("Enter your number: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("The number is positive\n");
        if (num % 2 == 0) {
            printf("The number is even\n");
        } else {
            printf("The number is odd\n");
        }
    } 
    else if (num < 0) {
        printf("The number is negative\n");
    } 
    else {
        printf("The number is zero\n");
    }

    return 0;
}
