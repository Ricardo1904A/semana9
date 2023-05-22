#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int f, c;

    printf("Ingrese el número de filas: ");
    scanf("%d", &f);

    printf("Ingrese el número de columnas: ");
    scanf("%d", &c);
    srand(time(NULL));
    int matriz[f][c];
    return 0;
