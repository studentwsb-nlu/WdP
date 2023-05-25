/******************************************************************************

                              Zadanie 6.14 - Patryk Nowoszynski

Ćwiczenie 6.14

Napisz program odwracający łańcuch znaków w miejscu, tzn. bez deklarowania drugiego łańcucha. 
Zastosuj indeksowanie tablic.

*******************************************************************************
W tym programie używamy dwóch indeksów i i j do poruszania się po łańcuchu znaków. 
Zaczynamy od początku łańcucha (i = 0) i od końca łańcucha (j = dlugosc - 1) i zamieniamy kolejne znaki, przesuwając się wewnątrz pętli. 
Operacja zamiany wykonuje się aż do momentu, gdy indeks i jest mniejszy od j. 
Dzięki temu odwracamy łańcuch znaków w miejscu, bez konieczności deklarowania dodatkowej tablicy. 
Na końcu programu wypisujemy odwrócony łańcuch.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

void odwrocenie(char *s);

int main() {
    char ciag_znakow[100];
    
    printf("Podaj lancuch znakow: ");
    fgets(ciag_znakow, sizeof(ciag_znakow), stdin);
    
    // Usuwanie znaku nowej linii ('\n') z końca łańcucha
    if (strlen(ciag_znakow) > 0 && ciag_znakow[strlen(ciag_znakow) - 1] == '\n') {
        ciag_znakow[strlen(ciag_znakow) - 1] = '\0';
    }
    
    odwrocenie(ciag_znakow);
    
    printf("Lancuch znakow po odwroceniu: %s\n", ciag_znakow);
    
    return 0;
}

void odwrocenie(char *s) {
    int dlugosc = strlen(s);
    int i, j;
    
    for (i = 0, j = dlugosc - 1; i < j; i++, j--) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}
