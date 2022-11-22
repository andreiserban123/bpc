#include <stdio.h>

void sum(int a, int b, int *s)
{
    s = a + b;
}
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    sum(a, b, &c);
    printf("%d", c);
    return 0;
}