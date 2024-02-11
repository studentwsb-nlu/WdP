
/*
Zadanie 2. Deklaracja tablicy(tablice)
Napisz program, który utworzy pięcioelementową 
tablicę liczb złożonych z liczb 3, 5, 7, 8, 9. 
Tablicę wypełnij liczbami podczas deklaracji.
Wypisz elementy tablicy na ekranie.
*/

#include <iostream>

using namespace std;

int main()
{
    int tab[5] = { 3, 5, 7, 8, 9 };
    for(int i = 0; i < 5; i++)
    {
        cout<<tab[i]<<",";
    }
    return 0;
}
