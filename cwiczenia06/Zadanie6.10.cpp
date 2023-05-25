/******************************************************************************

                              Zadanie 6.10 - Patryk Nowoszynski

Ćwiczenie 6.10

Napisz program, który zdefiniuje dwie funkcje ilustrujące przekazywanie zmiennej przez wartość oraz wskaźnik. 
Wypisz wartość zmiennej po wywołaniu każdej z funkcji.

*******************************************************************************
W funkcji wartosc, zmienna x jest przekazywana przez wartość. 
Wewnątrz tej funkcji, wartość x jest inkrementowana o 1, ale to nie wpływa na wartość zmiennej x w funkcji main, ponieważ jest przekazywana tylko jej kopia.
W funkcji wskaznik, zmienna x jest przekazywana przez wskaźnik. Poprzez dereferencję wskaźnika x za pomocą operatora *, wartość zmiennej x w funkcji main jest inkrementowana o 1.
W funkcji main, wartość x początkowo wynosi 1. Po wywołaniu funkcji wartosc, wartość x wciąż wynosi 1, ponieważ przekazywana jest tylko jej kopia. 
Natomiast po wywołaniu funkcji wskaznik, wartość x wynosi 2, ponieważ wskaźnik na zmienną x jest przekazywany i inkrementowany w funkcji.
*******************************************************************************/

#include <stdio.h>

int wartosc(int x);
void wskaznik(int *x);

int main() {
    int x = 1;
    int y;

    y = wartosc(x);
    printf("Wartosc x po wywolaniu funkcji wartosc: %d\n", x);

    wskaznik(&x);
    printf("Wartosc x po wywolaniu funkcji wskaznik: %d\n", x);

    return 0;
}

int wartosc(int x) {
    x++;
    return x;
}

void wskaznik(int *x) {
    (*x)++;
}
