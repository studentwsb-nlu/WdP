/******************************************************************************

                              Zadanie 6.8 - Patryk Nowoszynski

Ćwiczenie 6.8

Napisz program, który obliczy największą wartość zawartą w którymś z elementów tablicy zadeklarowanej przez Ciebie wcześniej. Skonstruuj odpowiednią funkcję.

*******************************************************************************
W powyższym programie zadeklarowano tablicę Moja_Tablica oraz funkcję znajdzNajwiekszaWartosc, która przyjmuje tablicę i jej rozmiar jako argumenty. 
Funkcja iteruje przez elementy tablicy, porównuje je i zwraca największą wartość.
W funkcji main zdefiniowano przykładową tablicę Moja_Tablica i obliczono jej rozmiar za pomocą sizeof. 
Następnie, wywołano funkcję znajdzNajwiekszaWartosc przekazując tablicę i jej rozmiar jako argumenty. 
Otrzymaną największą wartość przypisano do zmiennej najwiekszaWartosc i została ona wyświetlona na ekranie.
*******************************************************************************/

#include <iostream>

// Funkcja do obliczania największej wartości w tablicy
int znajdzNajwiekszaWartosc(const int tablica[], int rozmiar)
{
    int najwieksza = tablica[0]; // Załóżmy, że pierwszy element jest największy

    // Sprawdź pozostałe elementy tablicy
    for (int i = 1; i < rozmiar; i++)
    {
        if (tablica[i] > najwieksza)
        {
            najwieksza = tablica[i]; // Znaleziono większą wartość
        }
    }

    return najwieksza;
}

int main()
{
    int Moja_Tablica[] = {5, 2, 10, 3, 7}; // Przykładowa tablica
    int rozmiar = sizeof(Moja_Tablica) / sizeof(Moja_Tablica[0]);

    // Wywołanie funkcji i wyświetlenie wyniku
    int najwiekszaWartosc = znajdzNajwiekszaWartosc(Moja_Tablica, rozmiar);
    std::cout << "Najwieksza wartosc w tablicy: " << najwiekszaWartosc << std::endl;

    return 0;
}
