/******************************************************************************

                              Zadanie 6.3 - Patryk Nowoszynski

Ćwiczenie 6.3
Napisz program wczytujący liczbę. Program ma sprawdzić czy w tablicy jest podana liczba oraz wypisać index tej liczby (miejsce w tablicy)


*******************************************************************************
W tym programie definiujemy tablicę arr o rozmiarze 5, która zawiera przykładowe liczby. Możesz zmienić zawartość tablicy według własnych potrzeb.
Następnie, program prosi użytkownika o podanie liczby za pomocą instrukcji std::cin >> number;. Wczytana liczba zostaje przypisana do zmiennej number.
Następnie używamy pętli for, aby przeszukać tablicę i sprawdzić, czy podana liczba znajduje się w tablicy. 
Jeśli liczba zostanie znaleziona, przypisujemy jej indeks do zmiennej index i przerywamy pętlę za pomocą instrukcji break.
Po zakończeniu pętli, sprawdzamy wartość zmiennej index. Jeśli różna od -1, oznacza to, że liczba została znaleziona w tablicy, 
i wypisujemy na ekranie informację o indeksie, gdzie została znaleziona. W przeciwnym razie, informujemy użytkownika, że liczba nie została znaleziona w tablicy.
Przykład: 
Podaj liczbę: 9
Liczba 9 znajduje się w tablicy pod indeksem 2
*******************************************************************************/

#include <iostream>

int main() {
    const int size = 5;  // Rozmiar tablicy
    int arr[size] = {7, 2, 9, 4, 1};  // Przykładowa tablica liczb

    int number;
    std::cout << "Podaj liczbę: ";
    std::cin >> number;

    int index = -1;  // Zmienna przechowująca indeks znalezionej liczby, -1 oznacza brak znalezienia

    // Przeszukiwanie tablicy w poszukiwaniu podanej liczby
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) {
            index = i;
            break;  // Przerywamy pętlę gdy znajdziemy liczbę
        }
    }

    if (index != -1) {
        std::cout << "Liczba " << number << " znajduje się w tablicy pod indeksem " << index << std::endl;
    } else {
        std::cout << "Liczba " << number << " nie została znaleziona w tablicy." << std::endl;
    }

    return 0;
}
