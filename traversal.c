#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5}; // Array with 5 elements
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements:\n");
    
    // Traversion starts from here //
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
