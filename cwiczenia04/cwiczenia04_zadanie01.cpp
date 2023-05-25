/******************************************************************************

                              Zadanie 1 - Patryk Nowoszynski

Zadanie 1. Wczytaj zmienna wypisz wskaźnik
Napisz program definiujący zmienną typu int oraz wskaźnik do zmiennej typu int. Program
powinien wczytać ze standardowego wejścia wartość i podstawić ją do zmiennej stosując
wskaźnik i operator adresu (nie stosuj operatora new).

W tym programie tworzona jest zmienna x typu int, a następnie tworzony jest wskaźnik ptr, który przechowuje adres zmiennej x przy użyciu operatora adresu &. 
Następnie użytkownik jest proszony o wprowadzenie wartości, która jest zapisywana do zmiennej przez dereferencję wskaźnika *ptr. 
Na koniec program wypisuje wprowadzoną wartość.

*******************************************************************************/

#include <iostream>

int main() {
    int x;              // Definicja zmiennej typu int
    int* ptr = &x;      // Definicja wskaźnika i przypisanie adresu zmiennej

    std::cout << "Wprowadź wartość: ";
    std::cin >> *ptr;   // Wczytanie wartości do zmiennej przez wskaźnik

    std::cout << "Wprowadzona wartość: " << *ptr << std::endl;

    return 0;
}

