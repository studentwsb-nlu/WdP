/******************************************************************************

                              Zadanie 6.17 - Patryk Nowoszynski

Ćwiczenie 6.17

Napisz program, który zsumuje wszystkie elementy dwóch dowolnych tablic i umieści wynik w dowolnej zmiennej, której wartość zostanie wyświetlona na ekranie.
Użyj funkcji, która pobiera dwie tablice jako argumenty i zwraca wartość równą sumie wszystkich elementów danych tablic.

*******************************************************************************
W tym programie funkcja sumuj_tablice przyjmuje dwie tablice tab1 i tab2, oraz ich rozmiar size. 
Funkcja iteruje przez wszystkie elementy tablic, dodaje odpowiadające elementy z obu tablic do sumy i zwraca ostateczną sumę.
W funkcji main tworzone są dwie tablice tablica1 i tablica2, oraz zmienna rozmiar zawierająca ich rozmiar. 
Następnie wywoływana jest funkcja sumuj_tablice, przekazując obie tablice oraz ich rozmiar, a wynik sumy przypisywany jest do zmiennej suma. 
Na końcu wynik sumy jest wyświetlany na ekranie.
*******************************************************************************/

#include <stdio.h>

int sumuj_tablice(int tab1[], int tab2[], int size);

int main() {
    int tablica1[] = {1, 2, 3, 4, 5};
    int tablica2[] = {6, 7, 8, 9, 10};
    int rozmiar = sizeof(tablica1) / sizeof(tablica1[0]);
    
    int suma = sumuj_tablice(tablica1, tablica2, rozmiar);
    
    printf("Suma elementow tablicy: %d\n", suma);
    
    return 0;
}

int sumuj_tablice(int tab1[], int tab2[], int size) {
    int suma = 0;
    
    for (int i = 0; i < size; i++) {
        suma += tab1[i] + tab2[i];
    }
    
    return suma;
}
