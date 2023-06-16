/******************************************************************************

                              Zadanie 4.4 - Patryk Nowoszynski

Ćwiczenie 4.4

Napisz program, który przypisze każdemu elementowi dowolnej tablicy wartość 1.



*******************************************************************************
W powyższym programie zdefiniowano tablicę tablica o rozmiarze ROZMIAR_TABLICY, który wynosi 5. Następnie, w pętli for przypisano wartość 1 do każdego elementu tablicy.
W drugiej pętli for wyświetlono zawartość tablicy na ekranie, wyświetlając indeks elementu (i) oraz jego wartość (tablica[i]).
*******************************************************************************/

#include <stdio.h>

#define ROZMIAR_TABLICY 5

int main()
{
    int tablica[ROZMIAR_TABLICY];

    // Przypisanie wartości 1 do każdego elementu tablicy
    for (int i = 0; i < ROZMIAR_TABLICY; i++)
    {
        tablica[i] = 1;
    }

    // Wyświetlenie zawartości tablicy
    for (int i = 0; i < ROZMIAR_TABLICY; i++)
    {
        printf("tablica[%d] = %d\n", i, tablica[i]);
    }

    return 0;
}
