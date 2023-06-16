/******************************************************************************

                              Zadanie 6.5 - Patryk Nowoszynski

Ćwiczenie 6.5

Wczytaj słowa z klawiatury i wypisz to słowo dużymi literami. Np. We: adam Wy: ADAM

*******************************************************************************
Output:
Wpisz słowo: adam
Słowo dużymi literami: ADAM
*******************************************************************************/

#include <iostream>
#include <string>
#include <locale>

int main() {
    std::string word;
    std::cout << "Wpisz słowo: ";
    std::cin >> word;

    std::locale loc;

    // Zamiana liter na duże litery
    for (char& c : word) {
        c = std::toupper(c, loc);
    }

    std::cout << "Słowo dużymi literami: " << word << std::endl;

    return 0;
}
