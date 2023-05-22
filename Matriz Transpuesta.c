#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int f, c;

    printf("Ingrese el número de filas: "); // Ingreso de numero de filas por parte del usuario
    scanf("%d", &f);

    printf("Ingrese el número de columnas: ");// Ingreso de numero de columnas por parte del usuario
    scanf("%d", &c);
    srand(time(NULL));
    int matriz[f][c];

    for (int i = 0; i < f; i++)// genera la matriz aleatoria
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
    printf("La matriz inversa es:\n");//Imprime la matriz transpuesta
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