


/******************************************************************************

                              WskaznikiIReferencje.cpp

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
    /*
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
    */
    /*
    int* dynamicznaTablica = new int[5];
    uzupelnijTablice(dynamicznaTablica,5);
    wypiszTablice(dynamicznaTablica,5);
    int* wskaznik = dynamicznaTablica;
    cout<<"wskaznik: "<<wskaznik<<endl;
    cout<<"*wskaznik: "<<*wskaznik<<endl;
    // Przesunięcie wskaźnika wewnątrz dynamicznej tablicy
    wskaznik += 2;
    cout<<"wskaznik: "<<wskaznik<<endl;
    cout<<"*wskaznik: "<<*wskaznik<<endl;
    // Zwolnienie pamięci
    delete[] dynamicznaTablica;
    cout<<"wskaznik: "<<wskaznik<<endl;
    cout<<"*wskaznik: "<<*wskaznik<<endl;
    //nastapil wyciek pamieci!
    */
    /*
    int tablica[5] = {1, 2, 3, 4, 5};
    int* wsk1 = &tablica[2];
    int* wsk2 = &tablica[4];
    // Porównywanie wskaźników
    if (wsk1 == wsk2) 
    {
        cout<<"wskazniki są rowne!"<<endl;
    }
    else
    {
        cout<<"wskazniki nie sa rowne! wsk1: "<<wsk1
        <<" *wsk1: "<<*wsk1
        <<"  wsk2: "<<wsk2<<" *wsk2: "<<*wsk2<<endl;     
    }
    */
    /*
    int tablica[5] = {1, 2, 3, 4, 5};
    // Dostęp do elementów tablicy za pomocą wskaźnika
    for (int* tabw = tablica; tabw < tablica + 5; ++tabw)
    {
        cout<<"tabw: "<<tabw<<" *tabw: "<<*tabw<<endl;
    }
    wypiszTablice(tablica,5);
    */
    /*
    int tablica[] = {1, 2, 3, 4, 5};
    podwojElementy(tablica, 5);
    wypiszTablice(tablica,5);
    */
    /*
    int zmienna = 42;
    const int& referencja = zmienna;
    cout<<referencja;
    // Poniższy kod jest błędny, ponieważ referencję stałą nie można modyfikować
    //referencja = 10;
    */
    //wyswietlDane("LubiePlacki");
    /*
    int liczba = 42;
    int* wskaznik = nullptr; // Poprawne dla wskaźników
    cout<<"wskaznik: "<<wskaznik<<endl;
    //cout<<"*wskaznik: "<<*wskaznik<<endl;
    //int& referencja = nullptr; // Błąd - referencji nie można zainicjować wartością null
    int* wsk1 = &liczba;
    cout<<"wsk1: "<<wsk1<<endl;
    cout<<"*wsk1: "<<*wsk1<<endl;
    int* wsk2 = nullptr;
    cout<<"wsk2: "<<wsk2<<endl;
    //cout<<"*wsk2: "<<*wsk2<<endl;
    wsk2 = wsk1; // Poprawne dla wskaźników
    cout<<"wsk2: "<<wsk2<<endl;
    cout<<"*wsk2: "<<*wsk2<<endl;
    int& ref1 = liczba;
    // int& ref2 = nullptr; // Błąd - referencji nie można przypisać null
    */
    
    return 0;
}