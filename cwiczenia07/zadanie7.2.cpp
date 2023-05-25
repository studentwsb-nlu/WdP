
/******************************************************************************

                              Zadanie 7.2 - Patryk Nowoszynski

Ćwiczenie 7.2

Napisz program, który wyświetli na ekranie dzisiejszą datę. Wykorzystaj struktury.

*******************************************************************************
Wykorzystujemy funkcję time do pobrania bieżącego czasu, a następnie przekształcamy ten czas na lokalną reprezentację za pomocą funkcji localtime. 
Struktura tm zawiera wiele pól, takich jak tm_mday (dzień miesiąca), tm_mon (miesiąc) i tm_year (rok). 
Wykorzystujemy te pola do wyświetlenia dzisiejszej daty na ekranie.

*******************************************************************************/

#include <stdio.h>
#include <time.h>

int main() {
    // Pobierz bieżący czas
    time_t t = time(NULL);

    // Przekształć czas na lokalną reprezentację
    struct tm* now = localtime(&t);

    // Wyświetl dzisiejszą datę
    printf("Dzisiejsza data: %02d-%02d-%04d\n", now->tm_mday, now->tm_mon + 1, now->tm_year + 1900);

    return 0;
}
