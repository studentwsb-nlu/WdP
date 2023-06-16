/******************************************************************************

                              Zadanie 4.2 - Patryk Nowoszynski

Ćwiczenie 4.2

Napisz program, który wykorzysta funkcję do obliczenia różnicy dwóch zmiennych.



*******************************************************************************
W powyższym programie zdefiniowano funkcję obliczRoznice, która przyjmuje dwie zmienne typu int jako argumenty. Funkcja oblicza różnicę między tymi dwoma zmiennymi i zwraca wynik.
W funkcji main zdefiniowano zmienne x i y i przypisano im wartości 10 i 5 odpowiednio. Następnie, wywołano funkcję obliczRoznice, przekazując zmienne x i y jako argumenty. 
Otrzymany wynik został przypisany do zmiennej roznica i został wyświetlony na ekranie za pomocą std::cout.
*******************************************************************************/

#include <iostream>

// Funkcja do obliczania różnicy dwóch zmiennych
int obliczRoznice(int a, int b)
{
    return a - b;
}

int main()
{
    int x = 10;
    int y = 5;

    // Wywołanie funkcji i wyświetlenie wyniku
    int roznica = obliczRoznice(x, y);
    std::cout << "Roznica: " << roznica << std::endl;

    return 0;
}
