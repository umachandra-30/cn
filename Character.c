#include <stdio.h>
#include <string.h>

int main() {
    char data[100], stuffed[200];
    int i, j = 0;
    printf("Enter data: ");
    gets(data);

    stuffed[j++] = 'D';
    stuffed[j++] = 'L'; // Start Flag
    for (i = 0; i < strlen(data); i++) {
        if (data[i] == 'D' && data[i + 1] == 'L')
            stuffed[j++] = 'E'; // Escape
        stuffed[j++] = data[i];
    }
    stuffed[j++] = 'D';
    stuffed[j++] = 'L'; // End Flag
    stuffed[j] = '\0';

    printf("After Character Stuffing: %s\n", stuffed);
    return 0;
}
