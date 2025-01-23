#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, sum = 0;
    printf("enter a number:");
    scanf("%d", &n);

    while (n > 0)
    {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (n = sum)
    {
        printf("%d is armstrong number", n);
    }
    return 0;
}
