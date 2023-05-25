
/******************************************************************************

                              Zadanie 6.19 - Patryk Nowoszynski

Ćwiczenie 6.19

Napisz program, który wyświetli na ekranie jakikolwiek łańcuch znaków. Użyj dwóch sposobów!

*******************************************************************************
Używając funkcji cout z biblioteki <iostream> używamy strumienia cout z biblioteki <iostream> do wyświetlania łańcucha znaków.
Używamy pętli while i strumienia cout do wyświetlania poszczególnych znaków łańcucha.
Obie metody poprawnie wyświetlą łańcuch znaków "Witaj, swiecie!" na ekranie.
*******************************************************************************/

// Metoda 1

#include <iostream>

int main() {
    const char* lancuch = "Witaj, swiecie!";
    std::cout << "Metoda 1: " << lancuch << std::endl;
    return 0;
}


// Metoda 2

#include <iostream>

int main() {
    const char lancuch[] = "Witaj, swiecie!";
    int i = 0;
    std::cout << "Metoda 2: ";
    while (lancuch[i] != '\0') {
        std::cout << lancuch[i];
        i++;
    }
    std::cout << std::endl;
    return 0;
}