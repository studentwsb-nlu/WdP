/******************************************************************************

                              Zadanie 6.4 - Patryk Nowoszynski

Ćwiczenie 6.4

Napisz program, który wczyta liczbę całkowitą. Utwórz tablicę o tym rozmiarze. Uzupełnij tablicę liczbami podanymi przez użytkownika.

*******************************************************************************
W tym programie użytkownik zostanie poproszony o podanie rozmiaru tablicy za pomocą instrukcji std::cin >> size;. Wczytana wartość zostanie przypisana do zmiennej size.
Następnie, tworzymy tablicę arr o rozmiarze podanym przez użytkownika.
Program poprosi użytkownika o wprowadzenie size liczb oddzielonych spacją. Wykorzystamy pętlę for, aby wczytać te liczby i umieścić je w tablicy.
Po wczytaniu liczb, wyświetlamy zawartość tablicy za pomocą drugiej pętli for. Każdy element tablicy zostanie wypisany na ekranie oddzielony spacją.
Przykład:
Podaj rozmiar tablicy: 5
Podaj 5 liczb oddzielonych spacją: 2 3 5 6 8
Tablica została uzupełniona wartościami:
2 3 5 6 8 
*******************************************************************************/

#include <iostream>

int main() {
    int size;
    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> size;

    int arr[size];  // Deklaracja tablicy o podanym rozmiarze

    std::cout << "Podaj " << size << " liczb oddzielonych spacją: ";

    // Wczytanie liczb od użytkownika i uzupełnienie tablicy
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Tablica została uzupełniona wartościami:" << std::endl;

    // Wyświetlenie zawartości tablicy
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
