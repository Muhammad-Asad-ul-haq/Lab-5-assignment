#include <stdio.h>

int main() {
    int age;
    float income;
    int credit;  

   
    printf("Enter your age: ");
    scanf("%d", &age);
    
    
    printf("Enter your annual income: ");
    scanf("%f", &income);
    
 
    printf("Enter your credit score: ");
    scanf("%d", &credit);

   
    if (age >= 18 && income >= 25000 && credit >= 500) {
        printf("You are eligible for the loan\n");
    } 
    else {
        printf("You are not eligible for the loan\n");
      
       
        if (age < 18) {
            printf("Your age is less than 18\n");
        }
        if (income < 25000) {
            printf("Your income is less than $25,000\n");
        }
        if (credit < 500) {
            printf("Your credit score is less than 500\n");
        }
    }

    return 0;
}