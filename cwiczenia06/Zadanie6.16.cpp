/******************************************************************************

                              Zadanie 6.16 - Patryk Nowoszynski

Ćwiczenie 6.16

Napisz program, który wyzeruje dowolną tablicę wielowymiarową.

*******************************************************************************
W tym programie funkcja wyzeruj_tablice przyjmuje tablicę wielowymiarową tab, liczbę wierszy rows i liczbę kolumn cols. 
Funkcja iteruje przez wszystkie elementy tablicy za pomocą dwóch pętli for i ustawia wartość każdego elementu na 0.
W funkcji main tworzona jest tablica wielowymiarowa tablica i wypełniana przykładowymi wartościami. 
Następnie wyświetlana jest tablica przed wyzerowaniem, wywoływana jest funkcja wyzeruj_tablice przekazując tablicę tablica oraz jej rozmiary, 
a na końcu wyświetlana jest tablica po wyzerowaniu, aby potwierdzić, że wszystkie elementy zostały ustawione na 0.
*******************************************************************************/

#include <stdio.h>

void wyzeruj_tablice(int tab[][3], int rows, int cols);

int main() {
    int tablica[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    printf("Tablica przed wyzerowaniem:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }
    
    wyzeruj_tablice(tablica, 2, 3);
    
    printf("\nTablica po wyzerowaniu:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", tablica[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

void wyzeruj_tablice(int tab[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            tab[i][j] = 0;
        }
    }
}
