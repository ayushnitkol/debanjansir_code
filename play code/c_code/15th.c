#include <stdio.h>
int main()
{
    int start, end, sum = 0;
    printf("Enter the starting and ending values of the range: ");
    scanf("%d %d", &start, &end);

    for (int i = start; i < end; i++)
    {
        sum +=  i;
    }
    printf("Sum of numbers from %d to %d: %d\n", start, end, sum);
    return 0;
}