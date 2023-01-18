#include <stdio.h>

typedef struct
{
    int zi, luna, an;
} DATA;

typedef struct
{
    char nume[100];
    int grupa;
    int serie;
    int note[10];
} STUDENT;

typedef struct
{
    char nume[100];
    int grupa;
    int serie;
    int note[10];
    struct
    {
        int zi, luna, an;
    } DATA_C;

} STUDENT_C;

int main()
{

    return 0;
}