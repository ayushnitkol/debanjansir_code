#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, smallest, secondSmallest;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = secondSmallest = INT_MAX;
    for (i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if (secondSmallest == INT_MAX) printf("No second smallest element found.\n");
    else printf("Second smallest element: %d\n", secondSmallest);

    return 0;
}
