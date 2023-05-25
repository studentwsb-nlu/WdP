/******************************************************************************

                              Zadanie 6.15 - Patryk Nowoszynski

Ćwiczenie 6.15

Napisz program obliczający długość łańcucha znaków wpisanego z klawiatury. Zdefiniuj własną funkcję wykonującą taką operację.

*******************************************************************************
W tym programie używamy funkcji dlugosc_lancucha, która oblicza długość łańcucha znaków. 
Funkcja ta iteruje przez łańcuch znaków, zwiększając licznik dlugosc za każdym razem, gdy natrafi na kolejny znak, aż do momentu, gdy napotka znak końca łańcucha ('\0'). 
Następnie zwraca obliczoną długość. W funkcji main wprowadzamy łańcuch znaków z klawiatury, 
usuwamy znak nowej linii (jeśli istnieje) i wywołujemy funkcję dlugosc_lancucha, a następnie wyświetlamy obliczoną długość na ekranie.
*******************************************************************************/

#include <stdio.h>
#include <cstring>

int dlugosc_lancucha(char *s);

int main() {
    char ciag_znakow[100];
    
    printf("Podaj lancuch znakow: ");
    fgets(ciag_znakow, sizeof(ciag_znakow), stdin);
    
    // Usuwanie znaku nowej linii ('\n') z końca łańcucha
    if (ciag_znakow[strlen(ciag_znakow) - 1] == '\n') {
        ciag_znakow[strlen(ciag_znakow) - 1] = '\0';
    }
    
    int dlugosc = dlugosc_lancucha(ciag_znakow);
    
    printf("Dlugosc lancucha: %d\n", dlugosc);
    
    return 0;
}

int dlugosc_lancucha(char *s) {
    int dlugosc = 0;
    
    while (*s != '\0') {
        dlugosc++;
        s++;
    }
    
    return dlugosc;
}
