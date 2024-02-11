
/*Zadanie 6. Liczba wystąpień elementu (tablice)
Napisz program, który wczyta liczbę naturalna n (n<20). 
Następnie wypełni tablicę n liczbami losowymi z zakresu od 0 do 10.  
Wypisze elementy tablicy na ekranie. 
Następnie wczyta liczbę naturalną x.
Sprawdzi i wypisze na ekranie ile razy liczba x występuje w tablicy.*/

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
    for (int i=0; i<n; i=i+1)
    { 
        tablica[i] = rand() % 11; // funkcja rand generuje liczby od 0 do RAND_MAX
    } 
    cout<<"Losowe liczby: ";
    for (int i=0; i<n; i=i+1)
    {
        cout<<tablica[i]<<" ";
    }
    double x;
    int licznikx = 0;
    cout<<endl<<"Prosze podac x:";
    cin>>x;
    for (int i=0; i<n; i=i+1)
    {
        if (tablica[i]== x)
        {
            licznikx++;
        }
    }
    cout<<"Liczba x: "<<x<<" wystąpiła "<<licznikx<<" razy w tabeli!";
    return 0;
}