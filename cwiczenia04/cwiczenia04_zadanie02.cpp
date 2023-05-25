/******************************************************************************

                              Zadanie 2 - Patryk Nowoszynski

Zadanie 2. Wczytanie do zmiennej wskaźnikowej
Napisz program definiująca zmienną typu int oraz wskaźnik do typu int. Program powinien
wczytać ze standardowego wejścia liczbę do zmiennej wskaźnikowej. Przypisać tę wartość
do zmiennej typu int oraz wypisać na dwa razy na ekranie wczytaną wartość, korzystając
ze zmiennej typu int i zmiennej wskaźnikowej. Zwolnij pamięć.

W tym programie najpierw dokonuje się dynamicznej alokacji pamięci dla wskaźnika ptr typu int przy użyciu operatora new. 
Następnie użytkownik jest proszony o wprowadzenie liczby, która jest zapisywana do zmiennej wskaźnikowej przez dereferencję *ptr. 
Wartość tej zmiennej jest również przypisywana do zmiennej x typu int. 
Na końcu program wypisuje wczytaną wartość zarówno przy użyciu zmiennej typu int (x), jak i zmiennej wskaźnikowej (*ptr). 
Na koniec pamięć zaalokowana dla wskaźnika ptr jest zwalniana przy użyciu operatora delete.

*******************************************************************************/

#include <iostream>

int main() {
    int* ptr = new int;     // Dynamiczna alokacja pamięci dla wskaźnika typu int

    std::cout << "Wprowadź liczbę: ";
    std::cin >> *ptr;       // Wczytanie liczby do zmiennej wskaźnikowej

    int x = *ptr;           // Przypisanie wartości zmiennej wskaźnikowej do zmiennej typu int

    std::cout << "Wartość wczytana (zmienna int): " << x << std::endl;
    std::cout << "Wartość wczytana (zmienna wskaźnikowa): " << *ptr << std::endl;

    delete ptr;             // Zwolnienie zaalokowanej pamięci

    return 0;
}
