#include <stdio.h>
#include <string.h>

int main() {
    char input[50], output[100];
    int i, j = 0, count = 0;

    printf("Enter bit string: ");
    gets(input);

    for (i = 0; input[i] != '\0'; i++) {
        output[j++] = input[i];
        if (input[i] == '1') {
            count++;
            if (count == 5) {
                output[j++] = '0'; // Stuff bit
                count = 0;
            }
        } else count = 0;
    }
    output[j] = '\0';

    printf("After Bit Stuffing: %s\n", output);
    return 0;
}
