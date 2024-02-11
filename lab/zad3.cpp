/*Zadanie 3. Wczytanie i wypisanie tablicy liczb(tablice)
Napisz program, który wczyta liczbę naturalną n (n<100),
a następnie wczyta n liczb i wypełni nimi tablice. 
Wypisze elementy tablicy oddzielając je spacjami.*/

#include <iostream>

using namespace std;

int main()
{ 
    int n;
    do
    {
        cout << "Podaj liczbę naturalną mniejszą od 100: "<<endl;
        cin>> n;
        if(n > 100 || n < 0)
        {
            cout<<"Podana liczba jest większa od 100 lub mniejsza od 0"<<endl;   
        }
    }
    while(n > 100 || n < 0);
    
    double tablica[n];
    for (int i=0; i<n; i=i+1)
    {
        cout<<"Podaj "<<i+1<<" liczbę: ";
        cin>> tablica[i];
    }    
    cout <<" elementy tablicy: ";
    for (int i=0; i<n; i=i+1)
    {
        cout << tablica[i]<< " ";   
    }
    return 0;
}
