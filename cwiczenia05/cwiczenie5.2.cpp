/******************************************************************************

                              Zadanie 5.2 - Patryk Nowoszynski

Ćwiczenie 5.2

Napisz program, który wyświetli na ekranie liczbę dni w każdym miesiącu roku przestępnego oraz nieprzestępnego.

 

*******************************************************************************
Najpierw pobieramy od użytkownika rok za pomocą funkcji scanf(). Następnie sprawdzamy, czy podany rok jest przestępny lub nieprzestępny. 
W zależności od tego ustawiamy odpowiednie wartości w tablicy dniWMiesiacach, która przechowuje liczbę dni w poszczególnych miesiącach.
Następnie wyświetlamy na ekranie liczbę dni w każdym miesiącu za pomocą funkcji printf(), korzystając z wartości z tablicy dniWMiesiacach.
Przykładowe wykonanie programu może wyglądać następująco:

Podaj rok: 2023

Rok 2023:
Styczeń - 31 dni
Luty - 28 dni
Marzec - 31 dni
Kwiecień - 30 dni
Maj - 31 dni
Czerwiec - 30 dni
Lipiec - 31 dni
Sierpień - 31 dni
Wrzesień - 30 dni
Październik - 31 dni
Listopad - 30 dni
Grudzień - 31 dni

*******************************************************************************/

#include <stdio.h>

int main()
{
    int rok;
    printf("Podaj rok: ");
    scanf("%d", &rok);

    // Sprawdzenie, czy rok jest przestępny
    int czyPrzestepny = 0;
    if (rok % 4 == 0)
    {
        if (rok % 100 != 0 || rok % 400 == 0)
        {
            czyPrzestepny = 1;
        }
    }

    // Definicja tablicy z liczbą dni w poszczególnych miesiącach
    int dniWMiesiacach[12];

    if (czyPrzestepny)
    {
        // Rok przestępny
        dniWMiesiacach[0] = 31;
        dniWMiesiacach[1] = 29;
        dniWMiesiacach[2] = 31;
        dniWMiesiacach[3] = 30;
        dniWMiesiacach[4] = 31;
        dniWMiesiacach[5] = 30;
        dniWMiesiacach[6] = 31;
        dniWMiesiacach[7] = 31;
        dniWMiesiacach[8] = 30;
        dniWMiesiacach[9] = 31;
        dniWMiesiacach[10] = 30;
        dniWMiesiacach[11] = 31;
    }
    else
    {
        // Rok nieprzestępny
        dniWMiesiacach[0] = 31;
        dniWMiesiacach[1] = 28;
        dniWMiesiacach[2] = 31;
        dniWMiesiacach[3] = 30;
        dniWMiesiacach[4] = 31;
        dniWMiesiacach[5] = 30;
        dniWMiesiacach[6] = 31;
        dniWMiesiacach[7] = 31;
        dniWMiesiacach[8] = 30;
        dniWMiesiacach[9] = 31;
        dniWMiesiacach[10] = 30;
        dniWMiesiacach[11] = 31;
    }

    // Wyświetlanie liczby dni w każdym miesiącu
    printf("\nRok %d:\n", rok);
    printf("Styczeń - %d dni\n", dniWMiesiacach[0]);
    printf("Luty - %d dni\n", dniWMiesiacach[1]);
    printf("Marzec - %d dni\n", dniWMiesiacach[2]);
    printf("Kwiecień - %d dni\n", dniWMiesiacach[3]);
    printf("Maj - %d dni\n", dniWMiesiacach[4]);
    printf("Czerwiec - %d dni\n", dniWMiesiacach[5]);
    printf("Lipiec - %d dni\n", dniWMiesiacach[6]);
    printf("Sierpień - %d dni\n", dniWMiesiacach[7]);
    printf("Wrzesień - %d dni\n", dniWMiesiacach[8]);
    printf("Październik - %d dni\n", dniWMiesiacach[9]);
    printf("Listopad - %d dni\n", dniWMiesiacach[10]);
    printf("Grudzień - %d dni\n", dniWMiesiacach[11]);

    return 0;
}
