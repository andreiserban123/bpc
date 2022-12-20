// CERINTA: Fie o matrice cu m linii si n coloane reprezentand notele obtinute de cei m studenti ai seriei E la cele n
// discipline din sesiunea de iarna
// Sa se scrie programul C care sa contina un subprogram pentru :
// a) determinarea studentilor integralisti
// b) determinarea mediei de promovare pentru fiecare student
// media promovare = notele de promovare fara notele < 5
// c) determinarea disciplinelor cu cei mai putini restantieri
// d) determinarea studentilor bursieri (student integralist cu media mai mare ca 9)
// e) determinarea amplitudinii notelor obtinute de un student anumit student
#include <stdio.h>

void integralist(int m, int n, int a[130][10], int v[130], int *k)
{
    *k = 0;
    for (int i = 0; i < m; i++)
    {
        int ok = 1;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 5)
            {
                ok = 0;
                j = n;
            }
        }
        if (ok)
        {
            v[*k] = i;
            *k = *k + 1;
        }
    }
}

int amp(int m, int n, int a[130][10], int f)
{
    int min, max;
    max = a[f][0];
    min = a[f][0];
    for (int j = 0; j < n; j++)
    {
        if (a[f][j] > max)
        {
            max = a[f][j];
        }
        if (a[f][j] < min)
            min = a[f][j];
    }
    return max - min;
}

int main()
{
    int n, m, a[130][10];
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    int v[130], k;
    // integralist(m, n, a, v, &k);
    // if (k == 0)
    // {
    //     printf("NU EXISTA STUDENTI INTEGRALISTI");
    // }
    // else
    // {
    //     printf("STUDENTII INTEGRALISTI SUNT:\n");
    //     for (int i = 0; i < k; i++)
    //     {
    //         printf("%d ", v[i] + 1);
    //     }
    // }
    printf("Functia: %d", amp(m, n, a, 3));

    return 0;
}
