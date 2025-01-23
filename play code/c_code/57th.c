#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
            sum += arr[i] * arr[i];
    }

    printf("Sum of positive square elements: %d\n", sum);
    return 0;
}
