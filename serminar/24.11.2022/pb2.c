// cerinta: inmultirea a doua matrice

#include <stdio.h>

void main()
{
    float a[100][100], b[100][100], c[100][100];
    int n, m, p;
    scanf("%d %d %d", &m, &n, &p);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &a[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%f", &b[i][j]);

    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
            printf("%.2f ", c[i][j]);
        printf("\n");
    }
}
