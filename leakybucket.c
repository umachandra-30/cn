#include <stdio.h>

int main() {
    int bucketSize, outputRate, n, packetSize, bucket = 0;
    printf("Enter bucket size, output rate, and number of packets: ");
    scanf("%d %d %d", &bucketSize, &outputRate, &n);

    for (int i = 1; i <= n; i++) {
        printf("\nEnter size of packet %d: ", i);
        scanf("%d", &packetSize);

        if (packetSize + bucket > bucketSize)
            printf("Packet %d dropped!\n", i);
        else
            bucket += packetSize;

        printf("Packets in bucket: %d\n", bucket);

        bucket -= outputRate;
        if (bucket < 0) bucket = 0;
    }
    return 0;
}
