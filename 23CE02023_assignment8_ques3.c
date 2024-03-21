#include <stdio.h>

void reverse_array(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1; // Pointer to the last element

    while (start < end) {
        // Swap elements pointed by start and end
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers inward
        start++;
        end--;
    }
}

int main() {
    int n;
    printf("no of elemnts in array");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverse_array(arr, size);

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}