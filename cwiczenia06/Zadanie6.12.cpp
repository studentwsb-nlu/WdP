/******************************************************************************

                              Zadanie 6.12 - Patryk Nowoszynski

Ćwiczenie 6.12

Napisz program odwracający łańcuch znaków w miejscu, tzn. bez deklarowania drugiego łańcucha. Zastosuj operacje arytmetyczne na wskaźnikach.

#include <stdio.h>
#include <string.h>
void odwrocenie (char *s);

int main()
{
    char ciag_znakow[20] = "Rychu ma bimber";
    odwrocenie(ciag_znakow) ;
    printf("Ciag znakow po odwroceniu: %s\n", ciag_znakow); 
}

void odwrocenie(char *s)
{
    char *wsk = s + strlen(s)-1;
    char temp;
    for ( ;wsk>s; wsk--,s++)
    {
        temp = *s;
        *s = *wsk;
        *wsk = temp;
    }
}

*******************************************************************************
W funkcji odwrocenie, wskaźnik wsk ustawiany jest na ostatni znak łańcucha (s + strlen(s) - 1), a wskaźnik s na pierwszy znak. 
Następnie, za pomocą pętli for, przesuwamy wskaźnik wsk w kierunku początku łańcucha i wskaźnik s w kierunku końca łańcucha. 
Przy każdej iteracji zamieniamy miejscami znaki wskazywane przez wskaźniki s i wsk. 
Proces odwracania łańcucha kończy się, gdy wskaźnik wsk jest równy wskaźnikowi s lub jest położony przed nim.
*******************************************************************************/

#include <stdio.h>
#include <string.h>

void odwrocenie(char *s);

int main() {
    char ciag_znakow[20] = "Rychu ma bimber";
    odwrocenie(ciag_znakow);
    printf("Ciag znakow po odwroceniu: %s\n", ciag_znakow);
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
