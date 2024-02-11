/******************************************************************************

                              Wskazniki1.cpp

*******************************************************************************/

#include <iostream>
using namespace std;
int powieksz(int a)
{
    return ++a;
}
int powiekszReferencja(int& a)
{
    return ++a;
}
int& znajdzElement(int arr[], int rozmiar, int szukana) 
{
    for (int i = 0; i < rozmiar; ++i) {
        if (arr[i] == szukana) {
            return arr[i];
        }
    }
    throw invalid_argument( "Nie ma takiej wartosci w tablicy" );
}
void wypiszTablice(int arr[], int rozmiar) 
{
    for (int i = 0; i < rozmiar; ++i) {
        cout<<"tablica["<<i<<"]: "<<arr[i]<<endl;
    }
}

int main()
{
    /*
    int nieodnosnik = 69;
    cout<<"nieodnosnik: "<<nieodnosnik<<endl;//69
    int& odnosnik = nieodnosnik;
    int *wskaznik = &nieodnosnik;
    cout<<"odnosnik: "<<odnosnik<<endl;//69
    odnosnik++;
    cout<<"nieodnosnik po odnosnik++: "<<nieodnosnik<<endl;//70
    nieodnosnik++;
    cout<<"odnosnik po nieodnosnik++: "<<odnosnik<<endl;//71
    
    cout<<"wskaznik: "<<wskaznik<<endl;//adres
    cout<<"*wskaznik: "<<*wskaznik<<endl;//71
    
    cout<<"wskaznik po inkrementacji: "<<(++wskaznik)<<endl;//adres został powiekszony
    cout<<"*wskaznik po inkrementacji: "<<*wskaznik<<endl;
    //śmieć z poza zakresu czegokolwiek
    //jest to bład ponieważ stworzylismy wyciek pamięci
    */
    int tablica[5] = {1, 2, 3, 4, 5};
    wypiszTablice(tablica, 5);
    int* wskaznik = &tablica[3];
    // Przesunięcie o jeden element (4 bajty dla inta)
    cout<<"wskaznik: "<<wskaznik<<endl;
    cout<<"*wskaznik: "<<*wskaznik<<endl;
    wskaznik++;
    cout<<"wskaznik po wskaznik++: "<<wskaznik<<endl;
    cout<<"*wskaznik po wskaznik++: "<<*wskaznik<<endl;
    // Przesunięcie o trzy elementy wstecz
    wskaznik -= 3;
    cout<<"wskaznik po przesunieciu do tyłu o 3: "<<wskaznik<<endl;
    cout<<"*wskaznik po przesunieciu do tyłu o 3: "<<*wskaznik<<endl;
    
    
    return 0;
}