/******************************************************************************

                              Zadanie 9 - Patryk Nowoszynski

Zadanie 9. Rozmiar tablicy
Napisz program informujący o obszarze pamięci zarezerwowanym dla zadeklarowanej 20-
elementowej tablicy typu int. Program pokaże adresy każdej z komórek tablicy (do
przemieszczania się pomiędzy poszczególnymi komórkami tablicy używaj arytmetyki
wskaźnikowej), a także całkowity rozmiar pamięci zarezerwowany dla zadeklarowanej
tablicy (użyj funkcji sizeof()).


W tym programie została zadeklarowana 20-elementowa tablica array typu int.
Następnie program używa pętli for i funkcji printf() do wyświetlenia adresów poszczególnych komórek tablicy. Adresy są uzyskiwane przy użyciu operatora & oraz wskaźnika &array[i].
Program oblicza również całkowity rozmiar pamięci zarezerwowanej dla tablicy array za pomocą funkcji sizeof(). Wynik jest wyświetlany przy użyciu specyfikatora formatu %zu.

*******************************************************************************/

#include <stdio.h>

int main() {
    int array[20];

    printf("Adresy poszczegolnych komorek tablicy:\n");
    for (int i = 0; i < 20; i++) {
        printf("&array[%d] = %p\n", i, (void *)&array[i]);
    }

    size_t arraySize = sizeof(array);
    printf("Rozmiar tablicy: %zu\n", arraySize);

    return 0;
}
