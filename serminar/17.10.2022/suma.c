// cerinta: suma elementelor matricei

#include <stdio.h>
#include <stdlib.h>

void main()
{
    float mat[100][100], s = 0;
    int m, n, i, j;
    printf("DATI NUMERE BAAAAAAAA:\n");
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%f", &mat[i][j]);
            s += mat[i][j];
        }
    printf("%.2f", s);
}