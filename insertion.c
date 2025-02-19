#include <stdio.h>

int main() {
    int LA[100], N;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &N);

    if (N < 1 || N > 100) {
        printf("Invalid size! Must be between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }
    printf("\n");

    return 0;
}
