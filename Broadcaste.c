#include <stdio.h>

int main() {
    int n, i;
    char hosts[20][20];   // store up to 20 hosts (IP addresses)

    printf("Enter number of hosts in subnet: ");
    scanf("%d", &n);

    printf("Enter IP addresses of hosts (same subnet):\n");
    for (i = 0; i < n; i++) {
        scanf("%s", hosts[i]);
    }

    printf("\n--- Broadcast Tree ---\n");
    printf("Root Host: %s\n", hosts[0]);
    printf("Connections:\n");

    // Create a simple star-shaped tree (root -> all others)
    for (i = 1; i < n; i++) {
        printf("%s ---> %s\n", hosts[0], hosts[i]);
    }

    return 0;
}
