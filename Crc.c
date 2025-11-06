#include <stdio.h>
#include <string.h>

void xor(char *dividend, char *divisor) {
    for (int i = 1; i < strlen(divisor); i++)
        dividend[i] = (dividend[i] == divisor[i]) ? '0' : '1';
}

int main() {
    char data[100], divisor[30], temp[100];
    printf("Enter data bits: ");
    gets(data);
    printf("Enter divisor bits: ");
    gets(divisor);

    int dl = strlen(divisor);
    strcpy(temp, data);
    for (int i = 0; i < dl - 1; i++)
        strcat(temp, "0");

    for (int i = 0; i <= strlen(temp) - dl; i++)
        if (temp[i] == '1')
            xor(temp + i, divisor);

    printf("CRC Code: %s%s\n", data, temp + strlen(temp) - dl + 1);
    return 0;
}
