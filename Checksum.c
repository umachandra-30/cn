#include <stdio.h>

int main() {
    int data[10], i, n, sum = 0, checksum, receiver_sum;

    // --- SENDER SIDE ---
    printf("Enter number of data blocks: ");
    scanf("%d", &n);

    printf("Enter data blocks:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        sum += data[i];
    }

    checksum = ~sum; // 1's complement of sum
    printf("\nSender Side:");
    printf("\nSum = %d", sum);
    printf("\nChecksum (1's complement of sum) = %d\n", checksum);

    // --- RECEIVER SIDE ---
    receiver_sum = sum + (~sum);  // add checksum to sum
    printf("\nReceiver Side:");
    printf("\nSum of data + checksum = %d", receiver_sum);

    if (~receiver_sum == 0)
        printf("\nNo Error: Data received correctly ✅\n");
    else
        printf("\nError detected in received data ❌\n");

    return 0;
}
