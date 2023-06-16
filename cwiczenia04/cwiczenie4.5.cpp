/******************************************************************************

                              Zadanie 4.5 - Patryk Nowoszynski

Ćwiczenie 4.5

Napisz program, który pobierze z klawiatury 10 wartości, a następnie obliczy ich sumę i wyświetli odpowiednią informację na ekranie.



*******************************************************************************
Output:
Podaj 10 liczb:
2 5 8 4 5 6 7 3 5 11
Suma podanych liczb: 56
*******************************************************************************/

#include <stdio.h>

#define ROZMIAR_TABLICY 10

int main()
{
    int tablica[ROZMIAR_TABLICY];
    int suma = 0;

    printf("Podaj 10 liczb:\n");

    // Wczytanie wartości z klawiatury i obliczenie sumy
    for (int i = 0; i < ROZMIAR_TABLICY; i++)
    {
        scanf("%d", &tablica[i]);
        suma += tablica[i];
    }

    printf("Suma podanych liczb: %d\n", suma);

    return 0;
}
