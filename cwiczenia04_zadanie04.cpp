/******************************************************************************

                              Zadanie 4 - Patryk Nowoszynski

Zadanie 4. Wskaźnikiem po tablicy
Uwaga: w zadaniu odwołuj się do poszczególnych komórek tablicy poprzez wskaźnik.
a) Napisz program, który umożliwi użytkownikowi wypełnienie tablicy dziesięcioelementowej
dowolnymi cyframi.
b) Wypisz wszystkie elementy tablicy oraz ich sumę.
c) Wypisz tylko elementy parzyste tablicy.
d) Wypisz co drugi element tablicy

W tym programie deklarowana jest tablica dziesięcioelementowa o nazwie tablica, a następnie tworzony jest wskaźnik ptr, który wskazuje na tę tablicę.
Użytkownik jest proszony o wprowadzenie 10 cyfr oddzielonych spacją, które są zapisywane w kolejnych komórkach tablicy za pomocą wskaźnika *(ptr + i).
Następnie program wypisuje wszystkie elementy tablicy, sumę elementów, elementy parzyste oraz co drugi element tablicy, korzystając z odpowiednich pętli.

*******************************************************************************/

#include <iostream>

int main() {
    int tablica[10];    // Deklaracja tablicy dziesięcioelementowej
    int* ptr = tablica; // Wskaźnik do tablicy

    // Wypełnianie tablicy
    std::cout << "Wprowadź 10 cyfr oddzielonych spacją: ";
    for (int i = 0; i < 10; i++) {
        std::cin >> *(ptr + i);   // Wczytanie cyfry do kolejnej komórki tablicy przez wskaźnik
    }

    // Wypisanie wszystkich elementów tablicy
    std::cout << "Elementy tablicy: ";
    for (int i = 0; i < 10; i++) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    // Obliczenie sumy elementów tablicy
    int suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += *(ptr + i);
    }
    std::cout << "Suma elementów tablicy: " << suma << std::endl;

    // Wypisanie tylko elementów parzystych tablicy
    std::cout << "Elementy parzyste tablicy: ";
    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) % 2 == 0) {
            std::cout << *(ptr + i) << " ";
        }
    }
    std::cout << std::endl;

    // Wypisanie co drugiego elementu tablicy
    std::cout << "Co drugi element tablicy: ";
    for (int i = 0; i < 10; i += 2) {
        std::cout << *(ptr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
