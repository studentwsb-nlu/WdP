
/******************************************************************************

                              Zadanie 7.6 - Patryk Nowoszynski

Ćwiczenie 7.6

Napisz program, w którym zdefiniujesz typ struktury zawierającej dowolne wskaźniki jako pola. 
Zdefiniuj również zmienną dla tego typu oraz wskaźnik do takiej struktury. 
Przypisz wartości odpowiednim polom oraz wypisz je na ekranie poprzez odwołanie się zarówno do zwykłej zmiennej, jak i do wskaźnika do struktury.

*******************************************************************************
W tym programie definiujemy strukturę Struktura, która ma trzy pola, które są wskaźnikami na int, float i char. 
Następnie tworzymy zmienną moja_struktura tego typu i przypisujemy odpowiednie adresy zmiennych liczba, liczba_zmiennoprzecinkowa i znak do pól struktury. 
Następnie wypisujemy wartości pól, zarówno korzystając z odwołania do zmiennej struktury, jak i przez wskaźnik do struktury.

Wyjście z tego programu będzie takie:
Wartość int: 10
Wartość float: 3.14
Wartość char: A
Wartość int (przez wskaźnik): 10
Wartość float (przez wskaźnik): 3.14
Wartość char (przez wskaźnik): A


*******************************************************************************/

#include <stdio.h>

typedef struct {
    int *wsk_int;
    float *wsk_float;
    char *wsk_char;
} Struktura;

int main() {
    int liczba = 10;
    float liczba_zmiennoprzecinkowa = 3.14;
    char znak = 'A';

    Struktura moja_struktura;

    moja_struktura.wsk_int = &liczba;
    moja_struktura.wsk_float = &liczba_zmiennoprzecinkowa;
    moja_struktura.wsk_char = &znak;

    printf("Wartość int: %d\n", *moja_struktura.wsk_int);
    printf("Wartość float: %.2f\n", *moja_struktura.wsk_float);
    printf("Wartość char: %c\n", *moja_struktura.wsk_char);

    Struktura *wskaznik_struktury = &moja_struktura;

    printf("Wartość int (przez wskaźnik): %d\n", *(wskaznik_struktury->wsk_int));
    printf("Wartość float (przez wskaźnik): %.2f\n", *(wskaznik_struktury->wsk_float));
    printf("Wartość char (przez wskaźnik): %c\n", *(wskaznik_struktury->wsk_char));

    return 0;
}
