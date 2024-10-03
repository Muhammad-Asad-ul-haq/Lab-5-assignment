#include <stdio.h>

int main() {
    char original, encrypted, decrypted;
    char key = 'L';  

    
    printf("Enter a character to encrypt: ");
    scanf(" %c", &original);

    
    encrypted = original ^ key;  
    printf("Encrypted character: %c\n", encrypted);

   
    decrypted = encrypted ^ key;  
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}