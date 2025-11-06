#include <stdio.h>

int main() {
    int windowSize, sent = 0, ack, i;

    printf("Enter window size: ");
    scanf("%d", &windowSize);

    while (1) {
        for (i = 0; i < windowSize; i++) {
            printf("Frame %d has been transmitted.\n", sent + 1);
            sent++;
            if (sent == windowSize)
                break;
        }

        printf("\nPlease enter the last Acknowledgement received: ");
        scanf("%d", &ack);

        if (ack == windowSize) {
            printf("All frames have been acknowledged. Transmission complete.\n");
            break;
        } else {
            sent = ack;
            printf("\nSliding window moved. Next frame to send: %d\n\n", sent + 1);
        }
    }

    return 0;
}
