#include <stdio.h>

void find_duplicates(int *nums, int n) {
    // Create a frequency array to count occurrences of numbers
    int freq[n + 1];
    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    // Count occurrences of each number
    for (int i = 0; i <= n; i++) {
        freq[nums[i]]++;
    }

    // Print numbers occurring more than once
    printf("Numbers occurring more than once: ");
    for (int i = 1; i <= n; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int a;
    printf("enter no of elements in array:");
    scanf("%d",&a);
    int nums[a];
    printf("enter the elements of array:");
    for(int i=0;i<a;i++)
    scanf("%d",&nums[i]);
    int n = sizeof(nums) / sizeof(nums[0]) - 1;

    find_duplicates(nums, n);

    return 0;
}