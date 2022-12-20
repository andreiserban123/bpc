// cerinta: produs scalar a doi vectori (prin return si parametru)

#include <stdio.h>

int prodScal1(int m, int v1[10], int v2[10])
{
    int ps = 0;
    for (int i = 0; i < m; i++)
    {
        ps = ps + v1[i] * v2[i];
    }
    return ps;
}
void prodScal2(int m, int v1[10], int v2[10], int *ps)
{
    *ps = 0;
    for (int i = 0; i < m; i++)
    {
        *ps = *ps + v1[i] * v2[i];
    }
}

void citireV(int m, int v[10])
{
    for (int i = 0; i < m; i++)
        scanf("%d", &v[i]);
}

void afisV(int m, int v[10])
{
    for (int i = 0; i < m; i++)
        printf("%d ", v[i]);
}

void main()
{
    int n, a[10], b[10], ps;
    n = 3;
    citireV(n, a);
    citireV(n, b);
    printf("Prod: %d", prodScal1(n, a, b));
    prodScal2(n, a, b, &ps);
    printf("%d", ps);
}