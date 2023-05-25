
/******************************************************************************

                              Zadanie 7.7 - Patryk Nowoszynski

Ćwiczenie 7.7

Napisz program, który pozwoli na obsługę menu użytkownika. Zależnie od wyboru użytkownika program uruchomi odpowiednią funkcję. 
Zastosuj wskaźniki do funkcji.

*******************************************************************************
W tym programie tworzona jest tablica menu zawierająca wskaźniki do funkcji obsługujących poszczególne opcje menu. 
Następnie w pętli program wyświetla menu, pobiera wybór użytkownika i na podstawie tego wyboru wywołuje odpowiednią funkcję, używając wskaźników do funkcji. 
W przypadku nieprawidłowego wyboru program wyświetla odpowiednie komunikaty. Program wykonuje się w pętli dopóki użytkownik nie wybierze opcji "Wyjście" (wybór 0).

*******************************************************************************/
#include <stdio.h>

// Deklaracje funkcji obsługujących menu
void opcjaA();
void opcjaB();
void opcjaC();
void opcjaD();

int main() {
    // Deklaracja tablicy wskaźników do funkcji menu
    void (*menu[4])() = {opcjaA, opcjaB, opcjaC, opcjaD};

    int wybor;

    do {
        // Wyświetlanie menu
        printf("Menu:\n");
        printf("1. Opcja A\n");
        printf("2. Opcja B\n");
        printf("3. Opcja C\n");
        printf("4. Opcja D\n");
        printf("0. Wyjście\n");
        printf("Wybierz opcję: ");
        scanf("%d", &wybor);

        // Wywołanie odpowiedniej funkcji na podstawie wyboru użytkownika
        if (wybor >= 1 && wybor <= 4) {
            menu[wybor - 1]();
        } else if (wybor != 0) {
            printf("Nieprawidłowy wybór. Spróbuj ponownie.\n");
        }

        printf("\n");
    } while (wybor != 0);

    return 0;
}

// Implementacje funkcji obsługujących menu
void opcjaA() {
    printf("Wybrano opcję A.\n");
}

void opcjaB() {
    printf("Wybrano opcję B.\n");
}

void opcjaC() {
    printf("Wybrano opcję C.\n");
}

void opcjaD() {
    printf("Wybrano opcję D.\n");
}
