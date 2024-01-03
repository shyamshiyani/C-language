#include <stdio.h>

int main() {
    int n = 5; // Change the value of n for a different size

    for (int i = 1; i <= n; i++) {
        // Print binary numbers
        for (int j = 1; j <= i; j++) {
            printf("1");
        }

        // Print symbols
        for (int k = 1; k <= n - i; k++) {
            printf("-*");
        }

        printf("\n");
    }

    return 0;
}

