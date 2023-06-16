/******************************************************************************

                              Zadanie 6.1 - Patryk Nowoszynski

Ćwiczenie 6.1

Napisz program, który stworzy tablicę liczb zmiennoprzecinkowych. Wypełnij tablicę kolejnymi liczbami za pomocą wzoru: ((i+1)/13*3).

*******************************************************************************
W tym programie tworzymy tablicę arr o rozmiarze 10. Następnie, używając pętli for, wypełniamy tablicę wartościami, zgodnie z podanym wzorem ((i+1)/13*3), gdzie i oznacza indeks elementu w tablicy.
W pętli używamy rzutowania (i + 1) / 13.0f, aby zapewnić operację dzielenia jako liczby zmiennoprzecinkowej. W przeciwnym razie, w przypadku dzielenia dwóch liczb całkowitych, wynik będzie zaokrąglany do liczby całkowitej.
Następnie wyświetlamy zawartość tablicy na ekranie, używając drugiej pętli for.
Po wykonaniu programu, otrzymamy wyjście zawierające kolejne liczby zmiennoprzecinkowe wypełnione tablicy zgodnie z wzorem.
*******************************************************************************/

#include <iostream>

int main() {
    const int size = 10;  // Rozmiar tablicy

    float arr[size];  // Deklaracja tablicy liczb zmiennoprzecinkowych

    // Wypełnienie tablicy wartościami według wzoru
    for (int i = 0; i < size; i++) {
        arr[i] = ((i + 1) / 13.0f) * 3;
    }

    // Wyświetlenie zawartości tablicy
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
