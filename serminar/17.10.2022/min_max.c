// cerinta suma vect dintr-o matrice de pe linie

#include <stdio.h>

void main()
{
    float mat[100][100], s = 0, min, max;
    int m, n, i, j;
    printf("DATI NUMERE BAAAAAAAA:\n");
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        min = mat[i][0];
        max = mat[i][0];
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] > max)
                max = mat[i][j];
            if (mat[i][j] < min)
                min = mat[i][j];
        }
        printf("min:%.2f max:%.2f\n", min, max);
    }
}