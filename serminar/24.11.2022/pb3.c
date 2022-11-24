// cerinta : produsul scalar dintre cele doua diagonale a unei matrice patratice

#include <stdio.h>

void main()
{
    int n, i, j;
    float a[100][100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%f", &a[i][j]);
    printf("\n");
    float ps = 0;
    for (int i = 0; i < n; i++)
    {
        ps = ps + a[i][i] * a[i][n - 1 - i];
    }
    printf("%.2f", ps);
}