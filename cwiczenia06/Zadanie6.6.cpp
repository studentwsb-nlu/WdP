/******************************************************************************

                              Zadanie 6.6 - Patryk Nowoszynski

Ćwiczenie 6.6

Napisz program, w którym zadeklarujesz wskaźnik do zmiennej oraz przypiszesz mu odpowiedni adres. 
Następnie spraw, aby wartość zmiennej została wypisana na ekranie na dwa sposoby: poprzez bezpośrednie 
odniesienie do zmiennej oraz poprzez wskaźnik. Spraw również, aby na ekranie został wyświetlony adres zmiennej (na dwa sposoby).

 
#include <stdio.h>

int Ola;
int *Zbych;
int main()

{
    Ola = 180;
    Zbych = &Ola;
    printf("Wzrost Oli: %d\n", Ola);
    printf("Wzrost Oli wg Zbycha: %d\n", *Zbych);
    printf("Wzrost Oli: %p\n", &Ola);
    printf("Wzrost Oli: wg Zbycha: %p\n", Zbych);
        return 0;
}


Pamiętaj, że nazwa zadeklarowanej tablicy użyta bez nawiasów jest wskaźnikiem do tej tablicy:

int tablica[20];
tablica == &tablica[O];

*******************************************************************************
Output:
Wzrost Oli: 180
Wzrost Oli wg Zbycha: 180
Adres zmiennej Ola: 0x5ffe94
Adres zmiennej Ola wg Zbycha: 0x5ffe94
*******************************************************************************/

#include <iostream>

int main()
{
    int Ola;
    int* Zbych;

    Ola = 180;
    Zbych = &Ola;

    std::cout << "Wzrost Oli: " << Ola << std::endl;
    std::cout << "Wzrost Oli wg Zbycha: " << *Zbych << std::endl;
    std::cout << "Adres zmiennej Ola: " << &Ola << std::endl;
    std::cout << "Adres zmiennej Ola wg Zbycha: " << Zbych << std::endl;

    return 0;
}
