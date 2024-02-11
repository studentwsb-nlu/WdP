
/*
Zadanie 4. Max w tablicy(tablice)
Napisz program, który wczyta liczbę naturalna n (n<20).
Następnie wypełni tablicę n liczbami 
losowymi z zakresu od 1 do 50. 
Wypisze elementy tablicy na ekranie.
Znajdzie element największy i wypisze go na ekranie*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    
    srand((unsigned int)time(NULL));
    do
    {
        cout << "Podaj liczbę naturalną mniejszą bądź równą od 20: "<<endl;
        cin>> n;
        if(n > 20 || n < 0)
        {
            cout<<"Podana liczba jest większa od 20 lub mniejsza od 0"<<endl;   
        }
    }
    while(n > 20 || n < 0);
    
    double tablica[n];
    double max = 0;
    for (int i=0; i<n; i=i+1)
    { 
        tablica[i] = rand() % 50 + 1; // funkcja rand generuje liczby od 0 do RAND_MAX
        if(max<tablica[i])
        {
            max=tablica[i];
        }
    } 
    cout<<"Losowe liczby: ";
    for (int i=0; i<n; i=i+1)
    {
        cout<<tablica[i]<<" ";
    }
    cout<<"Największa wartoć"<<max<<endl;
    
    return 0;
}