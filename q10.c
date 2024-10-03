#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) {
        sum = 0;
        while (num > 0) {
            sum = sum+(num % 10); 
            num = num/10;      
        }
        num = sum; 
    }

    printf("The sum is: %d\n", num);
    return 0;
}
