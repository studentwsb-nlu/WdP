/******************************************************************************

                              Zadanie 4.3 - Patryk Nowoszynski

Ćwiczenie 4.3
Napisz program, który wyświetli na ekranie napis "Kocham język C". Użyj funkcji, która nie pobiera żadnych argumentów i nie zwraca żadnej wartości.


*******************************************************************************
W powyższym programie zdefiniowano funkcję wyswietlNapis, która nie przyjmuje żadnych argumentów i nie zwraca żadnej wartości (void). 
Wewnątrz funkcji użyto funkcji printf z biblioteki standardowej stdio.h, aby wyświetlić napis "Kocham język C" na ekranie.
W funkcji main wywołano funkcję wyswietlNapis, co spowoduje wyświetlenie napisu na ekranie.
*******************************************************************************/

#include <stdio.h>

// Funkcja do wyświetlania napisu "Kocham język C"
void wyswietlNapis()
{
    printf("Kocham język C\n");
}

int main()
{
    // Wywołanie funkcji
    wyswietlNapis();

    return 0;
}
