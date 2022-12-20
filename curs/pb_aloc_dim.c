// determine minimul de pe linie dintr o matrice alocata dinamic.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float **a, *min;
    int m, n, i, j;
    scanf("%d", &m);
    scanf("%d", &n);
    a = (float **)malloc(m * sizeof(float *));
    for (i = 0; i < m; i++)
        a[i] = (float *)malloc(n * sizeof(float));
}