/*
Zadanie 1. Tablica pięciu liczb(tablice)
Napisz program, który pobierze od użytkownika 5 liczb rzeczywistych i umieści je w odpowiedniej tablicy:
1.	Wypisz te wszystkie liczby w pojedynczej linii jedna po drugiej.
2.	Zmodyfikuj program w ten sposób, aby podczas wpisywania liczb liczył na bieżąco ich sumę i średnią i wypisywał na ekranie, np.:
	Wprowadź 1 liczbę: 3.14
	Suma wprowadzonych liczb: 3.14, średnia: 3.14
	Wprowadź 2 liczbę: 6.28
	Suma wprowadzonych liczb: 9.42, średnia: 4.71
3.	Zmodyfikuj kawałek kodu wypisujący wszystkie liczby w ten sposób, aby w przypadku liczb z zakresu od -5 do 5 (ale z wyłączeniem 0 ) program wypisywał tekst TAJNA a w pozostałych przypadkach wypisywał liczbę.
Zapisz ten sam warunek przy pomocy innych operatorów.
4.	Napisz kawałek kodu, który będzie wypisywał wszystkie liczby, aż do napotkania pierwszej, która będzie ujemna – wtedy zakończy wypisywanie.


*/

#include <iostream>

using namespace std;

int main()
{
    cout<<"Zapraszam!!!!!";
    double tab[5];
    double suma = 0;
    double srednia = 0;
    //1.
    for (int i = 0; i<5;i++)
    { // { to odpowiednik Begin w Pascal
        cout << "podaj "<< i +1 <<" liczbe: "<<endl;
        cin >> tab[i];
        suma+= tab[i]; // to jest odpowiednik suma = suma + tab[i];
        srednia = suma / (i+1);
        //2.
        cout<<"Przebieg pętli:"<<i + 1
        <<" (wartość i): "<<i
        <<" Suma wprowadzonych liczb: "
        <<suma<<" ,srednia: "<<srednia<<endl;
    } // } to odpowiednik end  
    cout<<"podane liczby: ";
    for (int i = 0; i <5; i++ )
    {
        //4.
        if (tab[i] <0)
        {
            break;
        }
        //3.
        // if - to jeżeli else - "w przeciwnym razie" && odpowiednik and - i,|| odpowiednik lub
        if (tab[i] <= 5&& tab[i] != 0)
        {
            cout<<"TAJNA,";
        }
        else
        {
            cout<<"JAWNA"<<endl;
            cout<<tab[i]<<", ";
        }
    }
    
    return 0;
}



