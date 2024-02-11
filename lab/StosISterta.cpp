/******************************************************************************

                              StosISterta.cpp

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
void uzupelnijTablice(int arr[], int rozmiar) 
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

int main()
{
    /*
    // Alokuje pamięć na stosie
    int zmiennaStosowa = 10;
    
    // Alokuje pamięć na stercie
    int* zmiennaStertowa = new int;
    cout<<"zmiennaStertowa: "<<zmiennaStertowa
    <<" *zmiennaStertowa: "<<*zmiennaStertowa<<endl;
    *zmiennaStertowa = 42;
    cout<<"zmiennaStertowa: "<<zmiennaStertowa
    <<" *zmiennaStertowa: "<<*zmiennaStertowa<<endl;
    delete zmiennaStertowa; // Zwalnia pamięć ze sterty
    cout<<"zmiennaStertowa: "<<zmiennaStertowa
    <<" *zmiennaStertowa: "<<*zmiennaStertowa<<endl;
    */
    /*
    int* dynamicznaLiczba = new int; // Alokacja dynamiczna na stercie
    *dynamicznaLiczba = 42;
    cout<<"dynamicznaLiczba: "<<dynamicznaLiczba
    <<" *dynamicznaLiczba: "<<*dynamicznaLiczba<<endl;
    int* dynamicznaTablica = new int[5]; // Alokacja dynamiczna tablicy na stercie
    uzupelnijTablice(dynamicznaTablica,5);
    wypiszTablice(dynamicznaTablica,5);
    delete dynamicznaLiczba; // Zwalnianie pamięci
    delete[] dynamicznaTablica; // Zwalnianie pamięci zaalokowanej dla tablicy
    wypiszTablice(dynamicznaTablica,5);
    cout<<"dynamicznaLiczba: "<<dynamicznaLiczba
    <<" *dynamicznaLiczba: "<<*dynamicznaLiczba<<endl;
    */
    return 0;
}



