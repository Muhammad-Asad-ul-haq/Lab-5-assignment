#include <stdio.h>

int main() {
   
    float attendance, assignment, exam, Grade;

   
    printf("Enter attendance percentage (0 - 100): ");
    scanf("%f", &attendance);

   
    printf("Enter assignment score (0 - 100): ");
    scanf("%f", &assignment);

   
    printf("Enter exam score (0 - 100): ");
    scanf("%f", &exam);
    
   
    if (attendance >= 70 && attendance<=100) {
     
        Grade = (attendance * 0.2) + (assignment * 0.3) + (exam* 0.5);
    } 
    else {
       
        Grade = (attendance * 0.1) + (assignment * 0.2) + (exam * 0.4);
    }

   
    printf("Final Grade: %.1f%\n", Grade);

    
    if (Grade >= 90) {
        printf("A\n");
    } 
    else if (Grade >= 80) {
        printf("B\n");
    } 
    else if (Grade >= 70) {
        printf("C\n");
    } 
    else if (Grade >= 60) {
        printf("D\n");
    } 
    else {
        printf("F\n");
    }

    return 0;
}