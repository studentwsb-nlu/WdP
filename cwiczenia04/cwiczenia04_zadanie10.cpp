/******************************************************************************

                              Zadanie 10 - Patryk Nowoszynski

Zadanie 10. Przeglądanie tablicy dwuwymiarowej
Zdefiniuj tablicę znaków o 3 wierszach i 2 kolumnach, zainicjalizuj ją dowolnie wybranymi
cyframi, a następnie wypisz ją ale bez używania operatora [].


W tym programie zdefiniowana jest tablica dwuwymiarowa array o rozmiarze 3 wierszy i 2 kolumn. Następnie inicjalizowana jest wartościami cyfr.
Aby przeglądać tablicę bez użycia operatora [], używamy wskaźnika ptr, który wskazuje na pierwszy element tablicy.
Następnie używamy zagnieżdżonych pętli for do iteracji po wierszach i kolumnach tablicy. Wyświetlamy zawartość każdej komórki tablicy, korzystając z arytmetyki wskaźnikowej i operatora *.
Pamiętaj, że tablica dwuwymiarowa jest przechowywana w pamięci jako blok jednowymiarowy, więc możemy używać wskaźnika do przeglądania kolejnych elementów.

*******************************************************************************/

#include <stdio.h>

int main() {
    char array[3][2] = {
        {'1', '2'},
        {'3', '4'},
        {'5', '6'}
    };

    char* ptr = &array[0][0];

    printf("Zawartosc tablicy:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%c ", *(ptr + i * 2 + j));
        }
        printf("\n");
    }

    return 0;
}
