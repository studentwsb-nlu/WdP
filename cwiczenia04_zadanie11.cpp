/******************************************************************************

                              Zadanie 11 - Patryk Nowoszynski

Zadanie 11. Dwuwymiarowa tablica dynamiczna
Napisz program, który wczyta dwie liczby naturalne m x n.
Utworzy dwuwymiarową dynamiczną tablicę o m wierszach i n kolumnach.
Wypełni tablicę kolejnymi liczbami naturalnymi.
Wypisze tablice na ekranie.
Nie zapomnij zwolnić pamięć.
Dla przykładowych danych
2 5
Przykładowe wyniki
0 1 2 3 4
5 6 7 8 9

W tym programie użytkownik jest proszony o podanie dwóch liczb naturalnych m (liczba wierszy) i n (liczba kolumn). 
Następnie program tworzy dwuwymiarową dynamiczną tablicę array o m wierszach, alokując odpowiednią ilość pamięci dla każdego wiersza.
Następnie program używa pętli for do wypełnienia tablicy kolejnymi liczbami naturalnymi. Licznik count jest inkrementowany w każdej iteracji pętli, a wartość jest przypisywana do odpowiedniej komórki tablicy array[i][j].
Następnie program wyświetla zawartość tablicy na ekranie za pomocą zagnieżdżonych pętli for.
Na końcu program zwalnia pamięć zajmowaną przez tablicę dynamiczną. 
Najpierw pętla for zwalnia pamięć dla każdego wiersza array[i], a następnie używana jest funkcja free() do zwolnienia pamięci dla samej tablicy array.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;
    printf("Podaj liczbe wierszy (m): ");
    scanf("%d", &m);
    printf("Podaj liczbe kolumn (n): ");
    scanf("%d", &n);

    int** array = (int**)malloc(m * sizeof(int*));

    int count = 0;
    for (int i = 0; i < m; i++) {
        array[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            array[i][j] = count++;
        }
    }

    printf("Zawartosc tablicy:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++) {
        free(array[i]);
    }
    free(array);

    return 0;
}
