/******************************************************************************

                              Zadanie 7 - Patryk Nowoszynski

Zadanie 7. Tablica dynamiczna liczb losowych
Napisz program, który wczyta liczbę naturalną n.
Następnie utworzy tablicę dynamiczną o rozmiarze n.
Wypełni tablicę dwucyfrowymi liczba mi losowymi.
Wypisze tablice na ekranie.

W tym programie użytkownik jest proszony o podanie liczby naturalnej n, która określa rozmiar tablicy.
Następnie program inicjalizuje generator liczb losowych, używając aktualnego czasu jako ziarna dla funkcji std::rand().
Tworzona jest tablica dynamiczna o rozmiarze n za pomocą operatora new[].
Pętla wypełnia tablicę dwucyfrowymi liczbami losowymi. Wykorzystywana jest funkcja std::rand() wraz z operatorem modulo, aby generować liczby losowe z zakresu 10-99.
Na koniec program wyświetla zawartość tablicy, iterując przez jej elementy.
Pamiętaj, że po zakończeniu użytkowania tablicy dynamicznej należy zwolnić pamięć za pomocą operatora delete[].

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int n;
    std::cout << "Podaj liczbe naturalna n: ";
    std::cin >> n;

    // Inicjalizacja generatora liczb losowych
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    int* tablica = new int[n];  // Tworzenie tablicy dynamicznej

    // Wypełnienie tablicy dwucyfrowymi liczbami losowymi
    for (int i = 0; i < n; i++) {
        tablica[i] = std::rand() % 90 + 10;  // Generowanie liczby losowej z zakresu 10-99
    }

    // Wyświetlenie zawartości tablicy
    std::cout << "Zawartosc tablicy:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << tablica[i] << " ";
    }
    std::cout << std::endl;

    delete[] tablica;  // Zwolnienie pamięci zajmowanej przez tablicę dynamiczną

    return 0;
}
