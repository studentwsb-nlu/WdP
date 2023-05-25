/******************************************************************************

                              Zadanie 12 - Patryk Nowoszynski

Zadanie 12. Pięcioelementowa podtablica o największej sumie
Napisz program pobierający od użytkownika zadeklarowaną przez niego ilość liczb
całkowitych (większą niż pięć). Przechowaj podane liczby w utworzonej na stercie tablicy
tab_sterta[]. Wyszukaj 5-elementową podtablicę o największej sumie – wynikiem
wyszukiwania będzie nr komórki tablicy tab_sterta[] od której rozpoczyna się szukana
podtablica (do przeszukiwania tablicy używaj arytmetyki wskaźnikowej)

W tym programie użytkownik jest proszony o podanie ilości liczb całkowitych większej niż pięć. 
Następnie program alokuje odpowiednią ilość pamięci dla tablicy dynamicznej tab_sterta za pomocą funkcji malloc().
Następnie program pobiera liczby od użytkownika i przechowuje je w tablicy tab_sterta.
Program następnie przeszukuje tablicę w poszukiwaniu 5-elementowej podtablicy o największej sumie. Wykorzystuje dwie pętle for, aby iterować przez wszystkie możliwe podtablice o długości pięć. 
Suma każdej podtablicy jest obliczana, a jeśli jest większa od aktualnej maksymalnej sumy, zapisywana jest jako nowa maksymalna suma, a indeks początkowy podtablicy jest zapisywany jako startIndex.
Na koniec program wyświetla indeks początkowy podtablicy o największej sumie

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Podaj ilosc liczb (wieksza niz piec): ");
    scanf("%d", &size);

    if (size <= 5) {
        printf("Podaj wieksza ilosc liczb!\n");
        return 0;
    }

    int* tab_sterta = (int*)malloc(size * sizeof(int));

    printf("Podaj liczby:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &tab_sterta[i]);
    }

    int maxSum = 0;
    int startIndex = 0;

    for (int i = 0; i <= size - 5; i++) {
        int sum = 0;
        for (int j = i; j < i + 5; j++) {
            sum += tab_sterta[j];
        }
        if (sum > maxSum) {
            maxSum = sum;
            startIndex = i;
        }
    }

    printf("Podtablica o najwiekszej sumie zaczyna sie od indeksu %d\n", startIndex);

    free(tab_sterta);

    return 0;
}
