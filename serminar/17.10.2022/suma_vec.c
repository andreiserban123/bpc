// cerinta suma vect dintr-o matrice de pe linie

#include <stdio.h>

void main()
{
    float mat[100][100], s = 0, v[100];
    int m, n, i, j, k = 0;
    printf("DATI NUMERE BAAAAAAAA:\n");
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        s = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%f", &mat[i][j]);
            s += mat[i][j];
        }
        v[k++] = s;
    }
    for (i = 0; i < k; i++)
        printf("%.2f ", v[i]);
}