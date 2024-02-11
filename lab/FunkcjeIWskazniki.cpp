/******************************************************************************

                              FunkcjeIWskazniki.cpp

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
    for (int i = 0; i < rozmiar; ++i) 
    {
        if (arr[i] == szukana) 
        {
            return arr[i];
        }
    }
    throw invalid_argument( "Nie ma takiej wartosci w tablicy" );
}
void wypiszTablice(int arr[], int rozmiar) 
{
    for (int i = 0; i < rozmiar; ++i) 
    {
        cout<<"tablica["<<i<<"]: "<<arr[i]<<endl;
    }
}
void wypiszTablice(double arr[], int rozmiar) 
{
    for (int i = 0; i < rozmiar; ++i) 
    {
        cout<<"tablica["<<i<<"]: "<<arr[i]<<endl;
    }
}
void uzupelnijTablice(int arr[], int rozmiar = 5) 
{
    for (int i = 0; i < rozmiar; ++i) 
    {
        arr[i] = i+1;    
    }
}
void uzupelnijTablice(double arr[], int rozmiar) 
{
    for (int i = 0; i < rozmiar; ++i) 
    {
        arr[i] = i+1;    
    }
}
void podwojElementy(int* tablica, int rozmiar) 
{
    for (int i = 0; i < rozmiar; ++i) 
    {
        tablica[i] *= 2;
    }
}
void wyswietlDane(const string& tekst) {
    // Kod, który nie modyfikuje wartości wskazywanej przez referencję
    cout << tekst << endl;
    
}
int dodaj(int a, int b) {
    return a + b;
}
int odejmij(int a, int b) {
    return a - b;
}

int main()
{
    /*
    int *tab = new int[6];
    uzupelnijTablice(tab,6);
    wypiszTablice(tab,6);
    delete[] tab;
    cout<<" tab2: "<<endl;
    int *tab2 = new int[5];
    uzupelnijTablice(tab);
    wypiszTablice(tab,5);
    delete[] tab;
    */
    int wartosc = 69;
    int (*wskaznikFunkcji)(int, int);
    wskaznikFunkcji = &dodaj;
    // Teraz wskaznikFunkcji wskazuje na funkcję dodaj 
    wartosc = wskaznikFunkcji(wartosc,1);
    cout<<"Wartosc: "<<wartosc<<endl;
    wartosc = wskaznikFunkcji(wartosc,1);
    cout<<"Wartosc: "<<wartosc<<endl;
    wskaznikFunkcji = &odejmij;
    wartosc = wskaznikFunkcji(wartosc,1);
    cout<<"Wartosc: "<<wartosc<<endl;
    return 0;
}



