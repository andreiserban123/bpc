// sortare liniilor dintr-o matrice

#include <stdio.h>

void main()
{
    float mat[100][100], s = 0, min, max;
    int m, n, i, j;
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
        for (j = 0; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
                if (mat[i][j] > mat[i][k])
                {
                    float aux = mat[i][j];
                    mat[i][j] = mat[i][k];
                    mat[i][k] = aux;
                }
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%.2f ", mat[i][j]);
        }
        printf("\n");
    }
}