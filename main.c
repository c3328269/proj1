#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    
    char oldAlphabet[26];
    char message[1000], ch;
    char newAlphabet;
    int i, key, cipher, temp, j, k;
    char rotation, substitution, selection;
    
    
    printf("Encryption\n For Rotation cipher enter 1 \n For substitution cipher enter 2\n");
    printf("Decryption\n To decrypt the rotation cipher enter 3\n To decrypt the substitution cipher enter 4\n");
    printf("Select cipher: ");
    scanf("%d", &cipher);
    
    switch(cipher){
        
        case 1:
    
    printf("Enter a message to encrypt: ");
    scanf("%s", message);

    printf("enter a key: ");
    scanf("%d", &key);
    

    for(i=0; message[i] !='\0'; i++){
        ch=message[i];
        
        if(ch >= 'a' && ch <= 'z'){
			ch = ch + key;
		    
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch;
		}
    }
    
    printf("\n Encrypted message: %s", message);
    
break;

        case 2:
    
    printf("Enter a key: ");
    scanf("%d", &key);
    
    printf("Enter a message to encrypt: ");
    scanf("%s", message);
    
    for(i=0; message[i] !='\0'; i++){
         ch=message[i];
        
        newAlphabet=key%26;
        
        if(ch >= 'a' && ch <= 'z'){
			ch = ch + newAlphabet;
		    
			if(ch > 'z'){
				ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch + newAlphabet;
			
		}
        
    }
    
    printf("\n Encrypted message: %s", message);
    
break;

        case 3:
        
    printf("Enter message to decrypt: ");
    scanf("%s", message);
    
    printf("Enter decryption key: ");
    scanf("%d", &key);
    
    for(i=0; message[i] !='\0'; i++){
        ch=message[i];
        
        if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
		    
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			message[i] = ch;
		}
    }
    
    printf("Decrypted message: %s", message);

break;

        case 4:
    printf("Enter a key: ");
    scanf("%d", &key);
    
    printf("Enter a message to decrypt: ");
    scanf("%s", message);
    
    for(i=0; message[i] !='\0'; i++){
         ch=message[i];
        
        newAlphabet=key/26;
        
        if(ch >= 'a' && ch <= 'z'){
			ch = ch + newAlphabet;
		    
			if(ch < 'a'){
				ch = ch + 'z' - 'a' + 1;
			}
			message[i] = ch - newAlphabet;
			
		}
        
    }
    
    printf("\n Decrypted message: %s", message);
    
break;
}
return 0;
}