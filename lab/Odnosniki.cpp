/******************************************************************************

                              Odnosniki.cpp

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
    cout<<"odnosnik: "<<odnosnik<<endl;//69
    odnosnik++;
    cout<<"nieodnosnik po odnosnik++: "<<nieodnosnik<<endl;//70
    nieodnosnik++;
    cout<<"odnosnik po nieodnosnik++: "<<odnosnik<<endl;//71
    
    int wynikPowiekszania = powieksz(nieodnosnik);
    cout<<"wynikPowiekszania: "<<wynikPowiekszania<<endl;//72
    cout<<"nieodnosnik po powiekszaniu: "<<nieodnosnik<<endl;//71
    //w wypadku wywołania funkcji nie przez odnosnik/referencje (w parametrze)
    //operujemy na kopii parametru
    int wynikPowiekszania2 = powieksz(odnosnik);
    cout<<"wynikPowiekszania: "
    <<wynikPowiekszania2<<endl;//72
    cout<<"nieodnosnik po powiekszaniu odnosnik: "
    <<nieodnosnik<<endl;//71
    
    int wynikPowiekszania3 = powiekszReferencja(nieodnosnik);
    cout<<"wynikPowiekszania: "
    <<wynikPowiekszania3<<endl;//72
    cout<<"nieodnosnik po powiekszaniu przez referencje: "
    <<nieodnosnik<<endl;//72
    
    int wynikPowiekszania4 = powiekszReferencja(odnosnik);
    cout<<"wynikPowiekszania: "
    <<wynikPowiekszania4<<endl;//73
    cout<<"nieodnosnik po powiekszaniu odnosnik przez referencje: "
    <<nieodnosnik<<endl;//73
    //w wypadku wywołania funkcji przez odnosnik/referencje (w parametrze)
    //operujemy na zmiennej przekanej do parametru
    */
    int tablica[] = {1, 2, 3, 4, 5};
    int& trojkaWTablicy = znajdzElement(tablica,5,3);
    wypiszTablice(tablica,5);
    trojkaWTablicy+=44;
    cout<<"Wartosci po powiekszeniu 3 o 44"<<endl;
    wypiszTablice(tablica,5);
    
    return 0;
}



