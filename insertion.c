#include <stdio.h>

int main() {
    int LA[100], N, K, ITEM;

    // Input the number of elements
    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &N);

    // Validate the number of elements
    if (N < 1 || N > 100) {
        printf("Invalid size! Must be between 1 and 100.\n");
        return 1;
    }

    // Input the elements of the array
    printf("Enter %d elements: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &LA[i]);
    }

    // Input the position where the element is to be inserted
    printf("Enter the position where the element is to be inserted: ");
    scanf("%d", &K);

    // Validate the position
    if (K < 1 || K > N + 1) {
        printf("Invalid position! Must be between 1 and %d.\n", N + 1);
        return 1;
    }

    // Input the element to be inserted
    printf("Enter the element to be inserted: ");
    scanf("%d", &ITEM);

    // Shift elements to the right
    for (int i = N; i >= K; i--) {
        LA[i] = LA[i - 1];
    }

    // Insert the element
    LA[K - 1] = ITEM;

    // Update the number of elements
    N++;

    // Print the updated array
    printf("Updated array elements: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", LA[i]);
    }
    printf("\n");

    return 0;
}
