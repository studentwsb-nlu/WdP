/******************************************************************************
switch - Patryk Nowoszynski


2. Napisz program w którym wczytasz z poziomu konsoli tablice 20 elementową i:

a) Napisz program sumujący elementy parzyste - tablicy jednowymiarowej
b) Napisz program sumujący elementy podzielne przez 7 - tablicy jednowymiarowej

Dane należy wpisać w konsoli.

*******************************************************************************/

#include <iostream>

int main() {
    const int rozmiar = 20;
    int tablica[rozmiar];

    // Wczytaj elementy do tablicy
    std::cout << "Wprowadz 20 liczb calkowitych:\n";
    for (int i = 0; i < rozmiar; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> tablica[i];
    }

    // Sumowanie elementów parzystych
    int sumaParzystych = 0;
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] % 2 == 0) {
            sumaParzystych += tablica[i];
        }
    }

    // Sumowanie elementów podzielnych przez 7
    int sumaPodzielnychPrzez7 = 0;
    for (int i = 0; i < rozmiar; ++i) {
        if (tablica[i] % 7 == 0) {
            sumaPodzielnychPrzez7 += tablica[i];
        }
    }

    // Wyświetl wyniki
    std::cout << "Suma elementow parzystych: " << sumaParzystych << std::endl;
    std::cout << "Suma elementow podzielnych przez 7: " << sumaPodzielnychPrzez7 << std::endl;

    return 0;
}
