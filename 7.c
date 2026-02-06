#include <stdio.h>
int main(void) {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is larger\n", a);
    else if (b > a)
        printf("%d is larger\n", b);
    else
        printf("Both are Equal\n");

    return 0;
}
