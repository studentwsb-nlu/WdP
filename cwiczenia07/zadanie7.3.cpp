
/******************************************************************************

                              Zadanie 7.3 - Patryk Nowoszynski

Ćwiczenie 7.3

Napisz program, który poprosi Cię o podanie swoich danych (imie, nazwisko, adres, data_urodzenia), a następnie wyświetli je na ekranie. Wykorzystaj struktury.

*******************************************************************************
Ten program prosi użytkownika o podanie swoich danych osobowych, takich jak imię, nazwisko, adres i datę urodzenia. Następnie wyświetla wprowadzone dane na ekranie.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct Person {
    char firstName[50];
    char lastName[50];
    char address[100];
    char dateOfBirth[20];
};

int main() {
    struct Person person;

    printf("Podaj swoje dane osobowe:\n");
    printf("Imię: ");
    fgets(person.firstName, sizeof(person.firstName), stdin);
    person.firstName[strcspn(person.firstName, "\n")] = '\0';

    printf("Nazwisko: ");
    fgets(person.lastName, sizeof(person.lastName), stdin);
    person.lastName[strcspn(person.lastName, "\n")] = '\0';

    printf("Adres: ");
    fgets(person.address, sizeof(person.address), stdin);
    person.address[strcspn(person.address, "\n")] = '\0';

    printf("Data urodzenia: ");
    fgets(person.dateOfBirth, sizeof(person.dateOfBirth), stdin);
    person.dateOfBirth[strcspn(person.dateOfBirth, "\n")] = '\0';

    printf("\nTwoje dane osobowe:\n");
    printf("Imię: %s\n", person.firstName);
    printf("Nazwisko: %s\n", person.lastName);
    printf("Adres: %s\n", person.address);
    printf("Data urodzenia: %s\n", person.dateOfBirth);

    return 0;
}
