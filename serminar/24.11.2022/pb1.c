// cerinta: suma a doua matrice

#include <stdio.h>

void main()
{
    float a[100][100], b[100][100], c[100][100];
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%f", &a[i][j]);
    printf("\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%f", &b[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            c[i][j] = a[i][j] + b[i][j];
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%.2f ", c[i][j]);
        printf("\n");
    }
}
