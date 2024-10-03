#include <stdio.h>

int main() {
    int age;
    char citizenship[100];

  
    printf("Enter your age: ");
    scanf("%d", &age);

  
    printf("Are you a citizen? (Y/N): ");
    scanf("%s", citizenship);
    
    
     if (age >= 18 && (citizenship[0] == 'y' || citizenship[0] == 'Y')) {
        printf("You are eligible to vote\n");
    } 
    else if(age < 18 || (citizenship[0] == 'n' || citizenship[0] == 'N')) {
        printf("You are not eligible to vote\n");
    }
    else{
        printf("give correct info");
    }

    return 0;
}
