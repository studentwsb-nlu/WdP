
/******************************************************************************

                              Zadanie 7.4 - Patryk Nowoszynski

Ćwiczenie 7.4

Spróbuj napisać program, który posłuży Ci jako mała książka adresowa. Skorzystaj ze struktur.

*******************************************************************************
Ten program umożliwia dodawanie nowych kontaktów do książki adresowej, wyświetlanie istniejących kontaktów oraz wyjście z programu.
Struktura Contact reprezentuje pojedynczy kontakt i zawiera pola dla imienia i nazwiska, numeru telefonu oraz

*******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

void addContact(struct Contact contacts[], int *numContacts) {
    if (*numContacts >= MAX_CONTACTS) {
        printf("Książka adresowa jest pełna.\n");
        return;
    }

    struct Contact newContact;

    printf("Dodawanie nowego kontaktu:\n");
    printf("Imię i nazwisko: ");
    fgets(newContact.name, sizeof(newContact.name), stdin);
    newContact.name[strcspn(newContact.name, "\n")] = '\0';  // Usunięcie znaku nowej linii

    printf("Numer telefonu: ");
    fgets(newContact.phone, sizeof(newContact.phone), stdin);
    newContact.phone[strcspn(newContact.phone, "\n")] = '\0';  // Usunięcie znaku nowej linii

    printf("Adres e-mail: ");
    fgets(newContact.email, sizeof(newContact.email), stdin);
    newContact.email[strcspn(newContact.email, "\n")] = '\0';  // Usunięcie znaku nowej linii

    contacts[*numContacts] = newContact;
    (*numContacts)++;

    printf("Kontakt został dodany.\n");
}

void displayContacts(const struct Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        printf("Książka adresowa jest pusta.\n");
        return;
    }

    printf("Książka adresowa:\n");

    for (int i = 0; i < numContacts; i++) {
        printf("Kontakt %d:\n", i + 1);
        printf("Imię i nazwisko: %s\n", contacts[i].name);
        printf("Numer telefonu: %s\n", contacts[i].phone);
        printf("Adres e-mail: %s\n", contacts[i].email);
    }
}

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int numContacts = 0;
    int choice;

    do {
        printf("\n========== Książka Adresowa ==========\n");
        printf("1. Dodaj kontakt\n");
        printf("2. Wyświetl kontakty\n");
        printf("3. Wyjdź\n");
        printf("Wybierz opcję: ");
        scanf("%d", &choice);
        getchar();  // Pobranie znaku nowej linii po scanf

        switch (choice) {
            case 1:
                addContact(contacts, &numContacts);
                break;
            case 2:
                displayContacts(contacts, numContacts);
                break;
            case 3:
                printf("Program zakończony.\n");
                break;
            default:
                printf("Nieprawidłowa opcja. Wybierz ponownie.\n");
                break;
        }
    } while (choice != 3);

    return 0;
}
