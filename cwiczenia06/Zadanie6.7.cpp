/******************************************************************************

                              Zadanie 6.7 - Patryk Nowoszynski

Ćwiczenie 6.7

Napisz program, który wypisze na ekranie wartość zawartą w pierwszym elemencie tabeli (wcześniej zadeklarowanej przez Ciebie) -użyj wskaźnika.

#include <stdio.h>
int Moja_Tablica[20];
int *wskaznik;

int main()
{
    Moja_Tablica[0] = 5;
    wskaznik = Moja_Tablica;
    printf ("1. element tablicy zawiera wartosc: %d \n",
            *wskaznik);
return 0;

}


*******************************************************************************
Wartość 5 została pobrana z pierwszego elementu tablicy Moja_Tablica za pomocą wskaźnika wskaznik i została wypisana na ekranie.
1. element tablicy zawiera wartość: 5
*******************************************************************************/

#include <iostream>

int Moja_Tablica[20];
int* wskaznik;

int main()
{
    Moja_Tablica[0] = 5;
    wskaznik = Moja_Tablica;
    std::cout << "1. element tablicy zawiera wartość: " << *wskaznik << std::endl;

    return 0;
}
