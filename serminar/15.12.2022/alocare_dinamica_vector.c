#include <stdio.h>
#include <malloc.h>

int *alocareV(int m)
{
    int *p;
    p = (int *)malloc(m * sizeof(int));
    return p;
}

void citireV(int *v, int m)
{
    int i;
    for (i = 0; i < m; i++)
        scanf("%d", &v[i]);
    // scanf("%d",&(*(v+i)));
    // scanf("%d", v+i);
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
    int *v, m;
    scanf("%d", &m);
    v = alocareV(m);
    citireV(v, m);
    afisareV(v, m);
    free(v);
    return 0;
}