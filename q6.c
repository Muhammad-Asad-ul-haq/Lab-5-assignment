#include <stdio.h>

int main() {
    int num;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Use a ternary operator to determine the result
    printf("The number is %s\n", (num > 0) ? "positive" : (num < 0) ? "negative" : "zero");

    return 0;
}
