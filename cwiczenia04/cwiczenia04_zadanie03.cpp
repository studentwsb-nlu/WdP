/******************************************************************************

                              Zadanie 3 - Patryk Nowoszynski

Zadanie 3. Suma dwóch zmiennych wskaźnikowych
Napisz program pobierający od użytkownika dwie liczby całkowite i wyświetlający sumę
tych liczb. UWAGA: W programie posługuj się tylko trzema wskaźnikami typu integer.

W tym programie definiujemy dwie zmienne firstNumber i secondNumber, które przechowują wczytane liczby, oraz zmienną sum, która przechowuje sumę tych liczb. 
Następnie tworzone są trzy wskaźniki: ptr1 wskazuje na firstNumber, ptr2 wskazuje na secondNumber, a ptr3 wskazuje na sum.
Użytkownik jest proszony o wprowadzenie dwóch liczb, które są wczytywane przez odpowiednie wskaźniki *ptr1 i *ptr2. 
Suma tych liczb jest obliczana i zapisywana do zmiennej sum przez dereferencję wskaźnika *ptr3. Na koniec program wypisuje obliczoną sumę.

*******************************************************************************/

#include <iostream>

int main() {
    int firstNumber, secondNumber, sum;
    int* ptr1 = &firstNumber;   // Wskaźnik do pierwszej liczby
    int* ptr2 = &secondNumber;  // Wskaźnik do drugiej liczby
    int* ptr3 = &sum;           // Wskaźnik do sumy

    std::cout << "Wprowadź pierwszą liczbę: ";
    std::cin >> *ptr1;          // Wczytanie pierwszej liczby przez wskaźnik

    std::cout << "Wprowadź drugą liczbę: ";
    std::cin >> *ptr2;          // Wczytanie drugiej liczby przez wskaźnik

    *ptr3 = *ptr1 + *ptr2;      // Obliczenie sumy i zapisanie jej przez wskaźnik

    std::cout << "Suma: " << *ptr3 << std::endl;

    return 0;
}
