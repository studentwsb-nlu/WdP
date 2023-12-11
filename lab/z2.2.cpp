/******************************************************************************

                              Przypisania i zmienne! - Patryk Nowoszynski

2. Napisz program, który będzie tworzył trzy zmienne typu int: year, month, day. 
Następnie dokonaj przypisania tym zmiennym wartości odpowiadającym aktualnej dacie. 
Wypisz wartości zmiennych przed i po instrukcji przypisania .

2.1.      Czy można utworzyć zmienną typu int o nazwie union? Spróbuj zdefiniować te zmienne na kilka różnych sposobów.

Nie jest możliwe utworzenie zmiennej o nazwie union, ponieważ słowo kluczowe union w języku C++ jest zarezerwowane na określenie unii, 
specjalnego typu danych, który pozwala na przechowywanie różnych typów danych w jednej przestrzeni pamięci. 

2.2. Dodaj do programu jeszcze jedną zmienną year2 Które konstrukcje są poprawne i jaki jest efekt ich działania?

year = year2;
year = 2010;
2010 = year;
2010 = 2010;

2.3.  Jaki będzie efekt wywołania instrukcji:  year=month=day=1;

*******************************************************************************/

#include <iostream>
#include <ctime> // Do obsługi daty i czasu

int main() {
    // Deklaracja zmiennych
    int year, month, day, year2;

    // Pobranie aktualnej daty i czasu
    std::time_t t = std::time(nullptr);
    tm* now = std::localtime(&t);

    // Wypisanie wartości zmiennych przed przypisaniem
    std::cout << "Przed przypisaniem:\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Month: " << month << "\n";
    std::cout << "Day: " << day << "\n";
    std::cout << "Year2: " << year2 << "\n\n";

    // Przypisanie aktualnej daty i wartości year2
    year = now->tm_year + 1900; // rok od 1900
    month = now->tm_mon + 1;    // miesiące numerowane od 0
    day = now->tm_mday;
    year2 = 2023;

    // Wypisanie wartości zmiennych po przypisaniu
    std::cout << "Po przypisaniu:\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Month: " << month << "\n";
    std::cout << "Day: " << day << "\n";
    std::cout << "Year2: " << year2 << "\n\n";

    // Konstrukcje
    year = year2;  // Poprawne: Przypisanie wartości year2 do year
    year = 2010;   // Poprawne: Przypisanie wartości 2010 do year
    // 2010 = year; // Niepoprawne: Nie możemy przypisać wartości do stałej
    // 2010 = 2010; // Niepoprawne: Nie możemy przypisać wartości do stałej

    // Wypisanie wartości zmiennych po kolejnych przypisaniach
    std::cout << "Po kolejnych przypisaniach:\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Year2: " << year2 << "\n";

    return 0;
}

