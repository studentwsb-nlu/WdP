/******************************************************************************

                              Zadanie 7 - Patryk Nowoszynski

Zadanie 7. Tablica dynamiczna
Napisz program, w którym zostanie utworzona (bez użycia operatora new) tablica typu int
o rozmiarze podanym przez użytkownika. Następnie w pętli wypełnij tablicę danymi i wypisz
jej zawartość.

W tym programie użytkownik jest proszony o podanie rozmiaru tablicy. Na tej podstawie tworzona jest tablica dynamiczna o odpowiednim rozmiarze za pomocą operatora new.
Następnie użytkownik jest proszony o wprowadzenie rozmiar liczb, które są wczytywane do odpowiednich komórek tablicy.
Po wczytaniu danych program wyświetla zawartość tablicy, iterując przez jej elementy.
Na końcu program używa operatora delete[] do zwolnienia pamięci zajmowanej przez tablicę dynamiczną.
Przykład ten pokazuje, jak tworzyć tablicę dynamiczną i wypełniać ją danymi bez użycia operatora new[]. 
Należy jednak pamiętać, że w przypadku dynamicznie alokowanej pamięci ważne jest zwolnienie jej po zakończeniu jej użytkowania za pomocą operatora delete[].

*******************************************************************************/


#include <iostream>

int main() {
    int rozmiar;
    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> rozmiar;

    int* tablica = new int[rozmiar];  // Tworzenie tablicy dynamicznej

    std::cout << "Wprowadz " << rozmiar << " liczb: ";
    for (int i = 0; i < rozmiar; i++) {
        std::cin >> tablica[i];  // Wczytanie liczby do tablicy
    }

    std::cout << "Zawartosc tablicy:" << std::endl;
    for (int i = 0; i < rozmiar; i++) {
        std::cout << tablica[i] << " ";  // Wyświetlenie zawartości tablicy
    }
    std::cout << std::endl;

    delete[] tablica;  // Zwolnienie pamięci zajmowanej przez tablicę dynamiczną

    return 0;
}
