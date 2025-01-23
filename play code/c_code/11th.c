#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is greatest .", a);
    }
    else
    {
        printf("%d is greatest .", b);
    }
    return 0;
}