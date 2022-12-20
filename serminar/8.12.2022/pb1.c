// cerinta: citire si afisare vector in functie
// IN: m, v[]
// OUT: v[]

#include <stdio.h>

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

int main()
{
    int a[10], n = 4;
    citireV(n, a);
    afisV(n, a);
    return 0;
}