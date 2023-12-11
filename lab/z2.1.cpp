/******************************************************************************

                              Przypisania i zmienne! - Patryk Nowoszynski

1.  Napisz program, który poprosi użytkownika o wprowadzenie dwóch liczb całkowitych i wypisze ich iloczyn.

*******************************************************************************/

#include <iostream>

int main() {
    // Deklaracja zmiennych
    int liczba1, liczba2, iloczyn;

    // Prośba o wprowadzenie pierwszej liczby
    std::cout << "Podaj pierwsza liczbe calkowita: ";
    std::cin >> liczba1;

    // Prośba o wprowadzenie drugiej liczby
    std::cout << "Podaj druga liczbe calkowita: ";
    std::cin >> liczba2;

    // Obliczenie iloczynu
    iloczyn = liczba1 * liczba2;

    // Wyświetlenie wyniku
    std::cout << "Iloczyn podanych liczb to: " << iloczyn << std::endl;

    return 0;
}
