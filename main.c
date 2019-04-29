#include <stdio.h>

int main() {
    
    char message[100], ch;
    int i, key, cipher;
    char rotation, substitution, selection;
   
    
    printf("Encryption\n For Rotation cipher enter 1 \n For substitution cipher enter 2\n");
    printf("To decrypt the rotation cipher enter 3\n To decrypt the substitution cipher enter 4\n");
    printf("Select cipher: ");
    scanf("%d", &cipher); //menu setup to select cipher and wether to encrypt or decrypt
    
    switch(cipher){
        
        case 1:
    //Rotation cipher encryption
    printf("Enter a message to encrypt: ");
    scanf("%s", message);

    printf("enter a key: ");            //menu for encryption to gain key and message to encrypt
    scanf("%d", &key);

    for(i=0; message[i] !='\0'; i++){   //in this instance 'i' will increase for each case and expires once the letter count is reached
        ch=message[i];                  //message[i] means the index
        
        if(ch >= 'a' && ch <= 'z'){     //if the characters are inbetween 'a' and 'z'
			ch = ch + key;
		    
			if(ch > 'z'){               //if the characters exceed 'a' and 'z' once the key has been used returns to the end of the alphabet
				ch = ch - 'z' + 'a' - 1;
			}
			message[i] = ch;            //capitals also work for each case but upper case remain upper case and lower case remain lower case
		}
    }
    
    printf("Encrypted message: %s", message);
    
break;

    case 2:

break;

        case 3:
    //Rotation cipher decryption
    printf("Enter message to decrypt: ");
    scanf("%s", message);
    
    printf("Enter decryption key: ");
    scanf("%d", &key);
    
    for(i=0; message[i] !='\0'; i++){
        ch=message[i];
        
        if(ch >= 'a' && ch <= 'z'){
			ch = ch - key;
		    
			if(ch < 'a'){             //replaced 'z' with 'a' as the key is taken away
				ch = ch + 'z' - 'a' + 1;
			}
			message[i] = ch;
		}
    }
    
    printf("Decrypted message: %s", message);
    //just reversed the process of encryption, inversed most math symbols
break;

    case 4:

break;
}

return 0;
}