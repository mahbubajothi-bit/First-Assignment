#include <stdio.h>

int main(void)
{
    int i, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d ", 3 * i);
    }
    return 0;
}
