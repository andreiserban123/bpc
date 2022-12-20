// cerinta: fie o matrice cu m studenti la n discipline
// sa se scrie subprogramul c care elimina o disciplina din planul de invatamant

#include <stdio.h>
#include <malloc.h>

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

void elimCol(int **mat, int m, int *n, int nrCol)
{
    int i, j;
    for (int i = 0; i < m; i++)
        for (int j = nrCol; j < (*n) - 1; j++)
            mat[i][j] = mat[i][j + 1];
    (*n)--;
}

int main()
{
    int m, n, **mat, nrCol;
    scanf("%d %d %d", &m, &n, &nrCol);
    mat = alocareM(m, n);
    citireM(mat, m, n);
    printf("\n");
    elimCol(mat, m, &n, nrCol);
    afisM(mat, m, n);
    dezalocM(mat, m);
    return 0;
}