/******************************************************************************

                              Zadanie 6.18 - Patryk Nowoszynski

Ćwiczenie 6.18

Napisz program, który przydzieli pamięć dla tablicy złożonej z 20 elementów typu float. Użyj funkcji malloc() oraz sizeof().

*******************************************************************************
W tym programie najpierw deklarujemy zmienną rozmiar, która określa liczbę elementów w tablicy (w tym przypadku 20). 
Następnie używamy funkcji malloc() do przydzielenia pamięci dla tablicy, przemnażając rozmiar elementu (sizeof(float)) przez ilość elementów (rozmiar). 
Sprawdzamy również, czy przydzielenie pamięci się powiodło poprzez sprawdzenie czy wskaźnik tablica nie jest równy NULL.
Następnie, w przykładowej pętli, przypisujemy wartości do poszczególnych elementów tablicy i wyświetlamy je na ekranie. W tym przypadku przypisujemy wartości od 1 do 20.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rozmiar = 20;
    float* tablica = (float*)malloc(rozmiar * sizeof(float));

    if (tablica == NULL) {
        printf("Nie udalo sie przydzielic pamieci.\n");
        return 1;
    }

    // Przykladowe uzycie tablicy
    for (int i = 0; i < rozmiar; i++) {
        tablica[i] = i + 1;
        printf("Element %d: %.2f\n", i, tablica[i]);
    }

    free(tablica);

    return 0;
}
