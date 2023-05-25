/******************************************************************************

                              Zadanie 5 - Patryk Nowoszynski

Napisz program, który wczyta słowo składający się z n (n<10) znaków i zapisze je w tablicy
znakowej, a następnie wypełni tablicę liczb całkowitych wartościami kodów ASCII znaków
podanego przez użytkownika słowa.
Wyświetli zawitość obu tablic.
Uwaga. Zarówno w definicji jak i w programie używaj tylko wskaźników.
Przykład
Dla wejścia:
Adam
Wyjście:
A d a m
65 100 97 109

W tym programie deklarowana jest tablica znakowa word o maksymalnej długości MAX_LENGTH oraz tablica liczb całkowitych asciiCodes o tej samej długości. 
Tworzone są także wskaźniki wordPtr i asciiPtr, które wskazują odpowiednio na tablicę znakową i tablicę liczb całkowitych.
Użytkownik jest proszony o wprowadzenie słowa, które jest wczytywane do tablicy znakowej word przez wskaźnik wordPtr.
Następnie program wypełnia tablicę liczb całkowitych asciiCodes wartościami kodów ASCII odpowiadającymi znakom z tablicy znakowej word. 
Wykorzystywany jest tu operator static_cast<int> do konwersji znaków na ich odpowiednie kody ASCII.
Na koniec program wyświetla zawartość obu tablic: tablicy znakowej oraz tablicy liczb całkowitych (kodów ASCII) przy użyciu odpowiednich wskaźników.

*******************************************************************************/

#include <iostream>
#include <cstring>

int main() {
    const int MAX_LENGTH = 10;

    char word[MAX_LENGTH];       // Tablica znakowa
    int asciiCodes[MAX_LENGTH];  // Tablica liczb całkowitych (kody ASCII)
    char* wordPtr = word;        // Wskaźnik do tablicy znakowej
    int* asciiPtr = asciiCodes;  // Wskaźnik do tablicy liczb całkowitych

    std::cout << "Wprowadź słowo: ";
    std::cin >> wordPtr;         // Wczytanie słowa do tablicy znakowej przez wskaźnik

    // Wypełnienie tablicy liczb całkowitych wartościami kodów ASCII
    for (int i = 0; i < strlen(wordPtr); i++) {
        *(asciiPtr + i) = static_cast<int>(*(wordPtr + i));
    }

    // Wyświetlenie zawartości tablicy znakowej
    std::cout << "Zawartość tablicy znakowej: ";
    for (int i = 0; i < strlen(wordPtr); i++) {
        std::cout << *(wordPtr + i) << " ";
    }
    std::cout << std::endl;

    // Wyświetlenie zawartości tablicy liczb całkowitych (kodów ASCII)
    std::cout << "Zawartość tablicy kodów ASCII: ";
    for (int i = 0; i < strlen(wordPtr); i++) {
        std::cout << *(asciiPtr + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
