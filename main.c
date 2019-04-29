#include <stdio.h>

int main() {
    
    char message[100], ch;
    int i, key, cipher;
    char rotation, substitution, selection;
    
    rotation = 1;
    substitution = 2;
    
    printf("Encryption\n For Rotation cipher enter 1 \n For substitution cipher enter 2\n");
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
    
    printf("Encrypted message: %s", message);
    
break;

case 2:



break;
}
return 0;
}