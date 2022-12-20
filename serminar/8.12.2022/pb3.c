// cerinta: produs vectorial a doi vectori returnat prin vectori

#include <stdio.h>

void prodVect(int m, int v1[10], int v2[10], int pv[10])
{
    for (int i = 0; i < m; i++)
    {
        pv[i] = v1[i] * v2[i];
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
    int a[10], b[10], c[10], n;
    n = 3;
    citireV(n, a);
    citireV(n, b);
    prodVect(n, a, b, c);
    afisV(n, c);
}