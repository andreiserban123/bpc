// cerinta : transpusa unei matrice dreptunghice

#include <stdio.h>

int main()
{
    float mat[100][100], t[100][100];
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%f", &mat[i][j]);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            t[i][j] = mat[j][i];
        }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%.2f\t", t[i][j]);
        printf("\n");
    }

    return 0;
}