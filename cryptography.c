#include <stdio.h>
#include <string.h>


////////////////////////Encryption Functions////////////////////////
void encryptData(const char *data, const char *key, unsigned char *encryptedData){
    int dataLength = strlen((char *)data);
    int keyLength = strlen((char *)key);
    for (int i = 0; i <dataLength; i++){
       encryptedData[i] = data[i] ^ key[i % keyLength];
    }
}


/////////////////////////Decryption Functions////////////////////////
void decryptData(const unsigned char *encryptedData, const char *key, char *decryptedData, int dataLength){

    int keyLength = strlen((char *)key);

    for( int i = 0; i < dataLength; i++){
        decryptedData[i] = encryptedData[i] ^ key[i % keyLength];
    }

    decryptedData[dataLength] = '\0';
}



/////////////////////////Main Function////////////////////////
int main(){
    char data[100];
    char key[100];

    unsigned char encryptedData[100];
    char decryptedData[100];

    ////////////////////////Input Data and Key////////////////////////
    printf("Enter the data to encrypt: ");
    for (int i =0;i<100;i++){
        scanf("%c", &data[i]);
        if(data[i] == '\n'){
            data[i] = '\0'; 
            break;
        }
    }

    printf("Enter the key: ");
    for (int i =0;i<100;i++){
        scanf("%c", &key[i]);
        if(key[i] == '\n'){
            key[i] = '\0';
            break;
        }
    }

    ////////////////////////Error Handling for Empty Key////////////////////////
    int dataLength = strlen((char *)data);
    int keyLength = strlen((char *)key);
    
    if(keyLength == 0){
        printf("Error: Key is empty.\n");
        return 1;
    }


    ///////////////////////Check Original Data and Key////////////////////////
    printf("Original Data: ");
    for (int i = 0; i < dataLength; i++){
        printf("%c", data[i]);
    }
    printf("\n");
    
    printf("Original Key: ");
    for (int i = 0; i < keyLength; i++){
        printf("%c", key[i]);
    }
    printf("\n");

    ////////////////////////Encryption and Decryption////////////////////////
    encryptData(data, key, encryptedData);
    printf("Encrypted Data: ");
    for (int i = 0; i < dataLength; i++){
        printf("%02X ", encryptedData[i]);
    }
    printf("\n");

    decryptData(encryptedData, key, decryptedData, dataLength);
    printf("Decrypted Data: ");
    for (int i = 0; i < dataLength; i++){
        printf("%c", decryptedData[i]);
    }
    printf("\n");

    return 0;
}