#include <stdio.h>

void deleteElement(int arr[], int *n, int index) {
    // Check if the index is valid
    if (index < 0 || index >= *n) {
        printf("Invalid index\n");
        return;
    }

    // Shift elements to the left to delete the element
    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    (*n)--;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    displayArray(arr, n);
    
    int index = 2; // Index to delete
    deleteElement(arr, &n, index);
    
    printf("Array after deletion: ");
    displayArray(arr, n);
    
    return 0;
}
