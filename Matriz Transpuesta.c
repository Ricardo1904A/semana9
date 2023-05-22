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

    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matriz[i][j] = rand() % 100; // Genera un número aleatorio entre 0 y 99
        }
    }

    printf("La matriz generada con numeros aleatorios es: \n"); // Imprimir matriz generada
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("La matriz inversa es:\n");
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    return 0;
}