// cerinta: matrice
#include <stdio.h>
#include <stdlib.h>

void citire(int m, int n, int a[100][100])
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}

void afisV(int m, int v[10])
{
    for (int i = 0; i < m; i++)
        printf("%d ", v[i]);
}

void maxRes(int m, int n, int mat[100][100], int nrRestF[10], int *k, int *max)
{
    int nr, nrRest[10];
    for (int j = 0; j < n; j++)
    {
        nr = 0;
        for (int i = 0; i < m; i++)
        {
            if (mat[i][j] < 5)
                nr++;
        }
        nrRest[j] = nr;
    }

    *max = nrRest[0];
    for (int j = 0; j < n; j++)
        if (nrRest[j] > *max)
            *max = nrRest[j];
    *k = 0;
    for (int j = 0; j < n; j++)
    {
        if (nrRest[j] == *max)
        {
            nrRestF[(*k)] = j;
            (*k)++;
        }
    }
}

int main()
{
    int a[100][100], m = 4, n = 4, nrRestF[10], k, max;
    citire(m, n, a);
    maxRes(m, n, a, nrRestF, &k, &max);
    printf("max de restantieri este %d", max);
    afisV(k, nrRestF);

    return 0;
}
// 9 8 3 10
// 4 7 4 10
// 3 4 5 9
// 10 9 6 4