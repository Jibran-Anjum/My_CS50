#include <stdio.h>
#include <string.h>

void decimalToBinary(int decimal, char *binary) {
    for (int i = 7; i >= 0; i--) {
        int bit = (decimal >> i) & 1;
        binary[7 - i] = bit + '0';
    }
    binary[8] = '\0';
}

void printBulb(int bit) {
    if (bit == 0) {
        printf("⚫");
    } else {
        printf("🟡");
    }
}

void encodeMessage(char *message) {
    for (int i = 0; i < strlen(message); i++) {
        int decimal = (int)message[i];
        char binary[9];
        decimalToBinary(decimal, binary);

        for (int j = 0; j < 8; j++) {
            printBulb(binary[j] - '0');
        }
        printf("\n");
    }
}

int main() {
    char message[20];

    printf("Input: ");
    scanf("%s", message);

    printf("Message: %s\n", message);
    encodeMessage(message);
    return 0;
}

