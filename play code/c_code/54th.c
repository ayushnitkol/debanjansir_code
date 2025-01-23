#include <stdio.h>
int main()
{
    int n, i, largest, smallest;
    printf("enter the no of elements:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = smallest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    printf("largest elemnt is %d\n", largest);
}