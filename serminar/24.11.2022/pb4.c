// cerinta: suma elem de sub diagonala secundara
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
    float s = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i + j > n - 1)
                s += a[i][j];
        }
    printf("%.2f", s);
}