#include <stdio.h>

int main()
{
    int i, n, count = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 5 == 0)
        {
            count = count + 1;
        }
    }

    printf("%d", count);

    return 0;
}
