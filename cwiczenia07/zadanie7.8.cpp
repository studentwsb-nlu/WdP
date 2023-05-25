
/******************************************************************************

                              Zadanie 7.8 - Patryk Nowoszynski

Ćwiczenie 7.8

Napisz program, w którym zdefiniujesz tablicę wskaźników do funkcji wykonujących podstawowe operacje arytmetyczne. 
Następnie wywołaj je wszystkie w pętli, odwołując się do poszczególnych elementów tablicy.



*******************************************************************************
W tym programie definiujemy tablicę operacje zawierającą wskaźniki do funkcji arytmetycznych. 
Następnie w pętli odwołujemy się do poszczególnych elementów tablicy i wywołujemy funkcje, przekazując im argumenty a i b. 
Wyniki operacji są następnie wyświetlane na ekranie.

*******************************************************************************/

#include <stdio.h>

// Deklaracje funkcji
int dodawanie(int a, int b);
int odejmowanie(int a, int b);
int mnozenie(int a, int b);
int dzielenie(int a, int b);

int main() {
    // Tablica wskaźników do funkcji arytmetycznych
    int (*operacje[4])(int, int) = {dodawanie, odejmowanie, mnozenie, dzielenie};

    int a = 10;
    int b = 5;

    // Wywołanie funkcji dla poszczególnych elementów tablicy wskaźników
    for (int i = 0; i < 4; i++) {
        int wynik = operacje[i](a, b);
        printf("Wynik operacji %d: %d\n", i+1, wynik);
    }

    return 0;
}

// Implementacje funkcji arytmetycznych
int dodawanie(int a, int b) {
    return a + b;
}

int odejmowanie(int a, int b) {
    return a - b;
}

int mnozenie(int a, int b) {
    return a * b;
}

int dzielenie(int a, int b) {
    return a / b;
}
