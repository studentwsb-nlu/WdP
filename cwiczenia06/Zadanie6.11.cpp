
/******************************************************************************

                              Zadanie 6.11 - Patryk Nowoszynski

Ćwiczenie 6.11

Napisz program, który poprosi o podanie ilości bimbru dostępnej do sprzedaży (w litrach) oraz na podstawie tej informacji udostępni odpowiednią ilość pamięci dla tablicy dynamicznej.

#include <stdio.h>
int main()
{
    int *kontener;
    int n;
    printf("Podaj mozliwa ilosc bimbru do sprzedazy w litrach: ");
    scanf("%d", &n);
    if (kontener = (int *) malloc(sizeof(int)*n))
        printf("Przygotowalem kontener o wielkosci %d\n", n);
    else
        printf("Nie mam takiego kontenera.");
    free(kontener);
    return 0;
}

 
>>Operacje arytmetyczne na wskaźnikach<<
Wskaźnik można przypisać do innego wskaźnika w poniższy sposób:·

int x = 0 ;
int *ptr1 = &x; 
int *ptr2 = ptrl;
 
int *wskaznik = tablica; ===> &tablica[O] 
wskaznik+5 ===> tablica[5]

Tak więc:

tablica[5] == wskaznik + 5 == tablica + 5.
*******************************************************************************
W programie została dodana biblioteka stdlib.h dla funkcji malloc i free.

Po wczytaniu ilości bimbru dostępnej do sprzedaży, program alokuje odpowiednią ilość pamięci dla tablicy dynamicznej za pomocą funkcji malloc. 
Rozmiar pamięci jest obliczany jako iloczyn sizeof(int) (rozmiar typu int) i n (ilość bimbru w litrach). 
Jeśli alokacja pamięci się powiedzie, program wyświetla komunikat o przygotowaniu kontenera o odpowiednim rozmiarze. 
W przeciwnym razie, jeśli alokacja się nie powiedzie, program wyświetla komunikat o braku takiego kontenera.
*******************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int *kontener;
    int n;

    printf("Podaj mozliwa ilosc bimbru do sprzedazy w litrach: ");
    scanf("%d", &n);

    kontener = (int *)malloc(sizeof(int) * n);

    if (kontener != NULL) {
        printf("Przygotowalem kontener o wielkosci %d\n", n);

        // Do something with the allocated memory

        free(kontener);
    } else {
        printf("Nie mam takiego kontenera.\n");
    }

    return 0;
}

