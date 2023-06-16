/******************************************************************************

                              Zadanie 4.6 - Patryk Nowoszynski

Ćwiczenie 4.6

Za pomocą instrukcji switch stwórz proste menu złożone z 8 opcji. Przy wybieraniu kolejnych opcji na ekranie powinien wyświetlać się odpowiedni tekst.


*******************************************************************************
W powyższym programie zaimplementowano proste menu złożone z 8 opcji, gdzie opcje są numerowane od 1 do 8, a opcja 0 oznacza wyjście z programu.

W pętli do-while wyświetlane jest menu, a następnie użytkownik jest proszony o wybór opcji za pomocą funkcji scanf. 
Następnie, instrukcja switch sprawdza wybraną opcję i wyświetla odpowiedni tekst na ekranie. 
Jeśli wybrana opcja jest nieprawidłowa, zostaje wyświetlony komunikat o nieprawidłowej opcji.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int opcja;

    do
    {
        printf("Menu:\n");
        printf("1. Opcja 1\n");
        printf("2. Opcja 2\n");
        printf("3. Opcja 3\n");
        printf("4. Opcja 4\n");
        printf("5. Opcja 5\n");
        printf("6. Opcja 6\n");
        printf("7. Opcja 7\n");
        printf("8. Opcja 8\n");
        printf("0. Wyjście\n");
        printf("Wybierz opcję: ");
        scanf("%d", &opcja);

        switch (opcja)
        {
            case 1:
                printf("Wybrano opcję 1.\n");
                break;
            case 2:
                printf("Wybrano opcję 2.\n");
                break;
            case 3:
                printf("Wybrano opcję 3.\n");
                break;
            case 4:
                printf("Wybrano opcję 4.\n");
                break;
            case 5:
                printf("Wybrano opcję 5.\n");
                break;
            case 6:
                printf("Wybrano opcję 6.\n");
                break;
            case 7:
                printf("Wybrano opcję 7.\n");
                break;
            case 8:
                printf("Wybrano opcję 8.\n");
                break;
            case 0:
                printf("Wyjście.\n");
                break;
            default:
                printf("Nieprawidłowa opcja. Wybierz ponownie.\n");
                break;
        }

        printf("\n");

    } while (opcja != 0);

    return 0;
}
