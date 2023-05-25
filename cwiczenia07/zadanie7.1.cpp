
/******************************************************************************

                              Zadanie 7.1 - Patryk Nowoszynski

Ćwiczenie 7.1

Napisz program, który wykorzystując strukturę wiek_kota, przypisuje poszczególnym elementom zarówno wartości informujące o kocim wieku, jak i o rzeczywistym, ludzkim wieku.
Zadeklaruj dwie instancje struktury i niech każdy z nich zawiera po trzy elementy (np. bury_kot, krasy_kot, kot_odmieniec).


*******************************************************************************
Deklarujesz strukturę wiek_kotka, która zawiera trzy elementy: bury_kot, krasy_kot i kot_odmieniec. Następnie tworzysz dwie instancje tej struktury: koci_wiek i ludzki_wiek.
Program poprawnie przypisuje i wyświetla wiek kota i wiek człowieka dla różnych elementów struktury.
*******************************************************************************/

#include <stdio.h>

struct wiek_kotka
{
    int bury_kot;
    int krasy_kot;
    int kot_odmieniec;

} koci_wiek, ludzki_wiek;

int main()

{
    koci_wiek.bury_kot = 3;
    koci_wiek.krasy_kot = 4;
    koci_wiek.kot_odmieniec = 5;
    ludzki_wiek.bury_kot = 30;
    ludzki_wiek.krasy_kot = 40;
    ludzki_wiek.kot_odmieniec = 50;
    printf("Bury kot ma %d lat, \n", ludzki_wiek.bury_kot);
    printf("ale po kocim ma %d lat, \n", koci_wiek.bury_kot);
    printf("Krasy kot ma %d lat, \n", ludzki_wiek.krasy_kot);
    printf("ale po kocim ma %d lat, \n", koci_wiek.krasy_kot);
    printf("Kot odmieniec  ma %d lat, \n", ludzki_wiek.kot_odmieniec);
    printf("ale po kocim ma %d lat, \n", koci_wiek.kot_odmieniec);

    return 0;
}
