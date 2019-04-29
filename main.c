#include <stdio.h>

void caesar (char cipher[], int shift);

int main() {
    
    char message[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    char 
    int key;
    
    
printf("Enter a message to encrypt: ");
scanf("%d\n", char);

printf("enter a key: ");
scanf("%d\n", &key);




return 0;
}

void caesar (char cipher[], int shift) {
    int = 0;
    
    while (cipher[i] != '\0'){
        if((cipher[i] + shift) >= 65 && (cipher[i] + shift) <=90) {
            cipher[i] += (shift);
        } else {
            cipher[i] += (shift - ('Z' - 'A'));
        }
        i++;
    }
    printf("%s", cipher);
}