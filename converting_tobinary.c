#include <stdio.h>
#include <string.h>

const char* converting_binary(char a) {
    static const char* binaryLookup[] = {
        "0000", "0001", "0010", "0011",
        "0100", "0101", "0110", "0111",
        "1000", "1001", "1010", "1011",
        "1100", "1101", "1110", "1111"
    };

    if (a >= '0' && a <= '9') {
        return binaryLookup[a - '0'];
    }
    if (a >= 'a' && a <= 'f') {
        return binaryLookup[a - 'a' + 10];
    }
    return NULL; 
}

int main() {
    char code[] = "005202b3";
    int len = strlen(code);

    for (int i = 0; i < len; i++) {
        const char* binary = converting_binary(code[i]);
        if (binary) {
            printf("%s ", binary);
        } else {
            printf("Invalid input: %c\n", code[i]);
        }
    }

    printf("\n");
    return 0;
}

