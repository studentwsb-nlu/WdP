
/******************************************************************************

                              Zadanie 7.5 - Patryk Nowoszynski

Ćwiczenie 7.5

Napisz program obliczający długość łańcucha znaków podanego jako argument programu. Pamiętaj o odpowiednich parametrach funkcji main.

*******************************************************************************
W programie wykorzystujemy parametry funkcji main - argc i argv - które reprezentują liczbę argumentów przekazanych do programu oraz tablicę napisów zawierającą te argumenty.
Najpierw sprawdzamy, czy liczba argumentów wynosi 2, co oznacza, że został podany tylko jeden argument - łańcuch znaków. 
Jeśli liczba argumentów jest inna, program wypisuje odpowiedni komunikat i zwraca wartość 1, oznaczającą błąd.
Następnie przypisujemy podany łańcuch znaków do zmiennej lanuch_znakow (odwołując się do drugiego elementu tablicy argv) i obliczamy jego długość za pomocą funkcji strlen.

Na koniec wypisujemy obliczoną długość łańcucha za pomocą printf.

Przykładowe użycie programu:
./program "Hello, world!"

Wyjście:
Długość łańcucha "Hello, world!" wynosi: 13

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Podaj dokładnie jeden argument - łańcuch znaków.\n");
        return 1;
    }

    char *lanuch_znakow = argv[1];
    int dlugosc = strlen(lanuch_znakow);

    printf("Długość łańcucha \"%s\" wynosi: %d\n", lanuch_znakow, dlugosc);

    return 0;
}
