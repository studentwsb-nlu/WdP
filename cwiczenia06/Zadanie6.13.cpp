/******************************************************************************

                              Zadanie 6.13 - Patryk Nowoszynski

Ćwiczenie 6.13

Wykonaj modyfikacje programu z Ćwiczenia 6.12 tak aby pobierał łańcuch znaków z klawiatury w następnie wykonał poprawnie swoje dziłanie.

*******************************************************************************
W tym programie użyto funkcji fgets do pobrania łańcucha znaków z klawiatury. 
Następnie sprawdzane jest, czy na końcu łańcucha znajduje się znak nowej linii ('\n'), który został dodany przez funkcję fgets. 
Jeśli tak, jest on zamieniany na znak zakończenia łańcucha ('\0') za pomocą przypisania ciag_znakow[strlen(ciag_znakow) - 1] = '\0'. 
Dzięki temu poprawnie przekazujemy łańcuch do funkcji odwrocenie. Na końcu programu wypisywany jest odwrócony łańcuch znaków.
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
    char *wsk = s + strlen(s) - 1;
    char temp;
    
    for (; wsk > s; wsk--, s++) {
        temp = *s;
        *s = *wsk;
        *wsk = temp;
    }
}
