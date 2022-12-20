// cerinta: Fie o matrice care contine informatiile privind vanzarile
// zilnice a m societati in n zile
// scrieti un subprogram care returneaza amplitudinea vanzarilor zilnice

#include <stdio.h>
#include <malloc.h>

int *alocareV(int m)
{
    int *p;
    p = (int *)malloc(m * sizeof(int));
    return p;
}

int **alocareM(int m, int n)
{
    int **mat;
    int i;
    mat = (int **)malloc(m * sizeof(int *));
    for (i = 0; i < m; i++)
        mat[i] = (int *)malloc(n * sizeof(int));
    // *(mat+i) = (int *)malloc(n * sizeof(int));
    return mat;
}

void dezalocM(int **mat, int m)
{
    for (int i = 0; i < m; i++)
        free(mat[i]);
    free(mat);
}

void citireM(int **mat, int m, int n)
{
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);
    // scanf("%d",&(*(*(mat+i)+j)));
    // scanf("%d", *(mat+i)+j);
}

void afisM(int **mat, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
            // printf("%d ", *(*(mat+i)+j));
        }
        printf("\n");
    }
}
void ampZil(int **mat, int m, int n, int *amp)
{
    int i, j;
    int max, min;
    for (int j = 0; j < n; j++)
    {
        max = mat[0][j];
        min = mat[0][j];
        for (i = 0; i < m; i++)
        {
            if (mat[i][j] > max)
                max = mat[i][j];
            if (mat[i][j] < min)
                min = mat[i][j];
        }
        amp[j] = max - min;
    }
}
void afisareV(int *v, int m)
{
    int i;
    for (i = 0; i < m; i++)
        printf("%d ", v[i]);
    // printf("%d ",*(v+i));
}
int main()
{
    int m, n, **mat, *amp;
    scanf("%d %d", &m, &n);
    mat = alocareM(m, n);
    citireM(mat, m, n);
    printf("\n");
    amp = alocareV(n);
    ampZil(mat, m, n, amp);
    afisareV(amp, n);
    free(amp);
    dezalocM(mat, m);
    return 0;
}