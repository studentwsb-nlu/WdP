/******************************************************************************

                              Zadanie 8 - Tablica 2- Patryk Nowoszynski

Zadanie 8. Tablica 2
Zmodyfikuj program poniżej tak aby wypisywał tablicę a.
#include <stdio.h>
int main()
{
int a[10];
int* ip = a;
for(int i = 0; i < 10; i++)
ip[i] = i * 10;
}
Wypisz zawartość zmiennych a i ip. Następnie zmodyfikuj program tak, aby tablica a była
tworzona dynamicznie. Na końcu programu pamiętaj, program zwalniał pamięć zajętą przez
tablice.

W tym programie tablica a jest tworzona dynamicznie przy użyciu funkcji malloc() i alokowana na odpowiednią ilość pamięci dla 10 elementów typu int.
Następnie pętla wypełnia tablicę a wartościami i * 10.
Program wypisuje zawartość tablicy a przy użyciu pętli for i printf(), a także wypisuje zawartość wskaźnika ip, który wskazuje na pierwszy element tablicy a.
Na końcu programu używamy funkcji free() do zwolnienia pamięci zajmowanej przez tablicę dynamiczną a.
Pamiętaj, że przy użyciu malloc() należy zwolnić pamięć za pomocą free(), aby uniknąć wycieków pamięci.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* a = (int*)malloc(10 * sizeof(int)); // Tworzenie tablicy dynamicznej

    int* ip = a;
    for (int i = 0; i < 10; i++)
        ip[i] = i * 10;

    printf("Zawartosc tablicy a:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");

    printf("Zawartosc wskaźnika ip:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", ip[i]);
    printf("\n");

    free(a); // Zwalnianie pamięci zajętej przez tablicę dynamiczną

    return 0;
}
