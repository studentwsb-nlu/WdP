/*
Zadanie 5. Min na początek(tablice)
Napisz program, który wczyta liczbę naturalna n (n < 20).
Następnie wypełni tablicę n liczbami losowymi z zakresu od 1 do 50. 
Wypisze elementy tablicy na ekranie.
Znajdzie pozycję najmniejszego elementu i zamieni element
najmniejszy z pierwszym elementem tablicy.
Wypisze elementy tablicy na ekranie 
*/

#include <iostream>

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
    double min; 
    int minindeks = 0;
    for (int i=0; i<n; i=i+1)
    { 
        tablica[i] = rand() % 50 + 1; // funkcja rand generuje liczby od 0 do RAND_MAX
        if(i == 0)
        {
            min = tablica[i]; 
        }
        else if(min>tablica[i])
        {
            min=tablica[i];
            minindeks = i;
        }
    } 
    if(minindeks != 0)
    {
        double tmp = tablica[0];
        tablica[0] = min;
        tablica[minindeks] = tmp;
    }
    
    
    cout<<"Min: "<<min<<" Minindeks: "<<minindeks<<" Losowe liczby: ";
    for (int i=0; i<n; i=i+1)
    {
        cout<<tablica[i]<<" ";
    }
    return 0;
}