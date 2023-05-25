/******************************************************************************

                              Zadanie 6.9 - Patryk Nowoszynski

Ćwiczenie 6.9

"Zamiana przez wskaźnik"
Napisz funkcję zamiana(int *a, int *b), która zamienia wartości zmiennych a, b.
UWAGA: program powinien przesunąć z jednego miejsca pamięci w drugie wartości zmiennych!

Napisz program, który stosując funkcję zamiana
(int *a, int *b) wymienia wartościami dwie zmienne 
automatyczne oraz dwie zmienne dynamiczne. Wartości wszystkich zmiennych wczytaj z klawiatury. 
Po dokonaniu wymiany wydrukuj wartości zmiennych na ekranie.
 
>>Dwa sposoby przekazywania parametrów do funkcji: 
przez wartość  Prototyp funkcji:
int funkcja(int x) natomiast jej wywołanie:
y = funkcja(x) oraz przez wskaźnik.
Prototyp funkcji:
int funkcja(int *x)
natomiast jej wywołanie:
y = funkcja(&x)

*******************************************************************************
W tym programie, funkcja zamiana przyjmuje dwa wskaźniki do zmiennych typu int i zamienia wartości tych zmiennych, korzystając z operatora dereferencji (*). 
Wykorzystuje tym samym wskaźniki, aby zmienić wartości zmiennych w miejscu.
W funkcji main, program pobiera dwie liczby całkowite od użytkownika i przechowuje je w zmiennych x i y. 
Następnie dynamicznie alokuje pamięć dla dwóch zmiennych dynamicznych dynamiczna1 i dynamiczna2 za pomocą funkcji malloc.
Program wczytuje również dwie liczby całkowite dla zmiennych dynamicznych z klawiatury.
Następnie program wyświetla wartości zmiennych przed zamianą.
Wywołuje funkcję zamiana dla zmiennych x i y, oraz dla zmiennych dynamicznych dynamiczna1 i dynamiczna2, aby wymienić ich wartości.
Na koniec program wyświetla wartości zmiennych po zamianie.
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void zamiana(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;
    printf("Podaj dwie liczby calkowite: ");
    scanf("%d %d", &x, &y);

    int* dynamiczna1 = (int*)malloc(sizeof(int));
    int* dynamiczna2 = (int*)malloc(sizeof(int));

    printf("Podaj dwie liczby calkowite dla zmiennych dynamicznych: ");
    scanf("%d %d", dynamiczna1, dynamiczna2);

    printf("Przed zamiana:\n");
    printf("Zmienna x: %d\n", x);
    printf("Zmienna y: %d\n", y);
    printf("Zmienna dynamiczna1: %d\n", *dynamiczna1);
    printf("Zmienna dynamiczna2: %d\n", *dynamiczna2);

    zamiana(&x, &y);
    zamiana(dynamiczna1, dynamiczna2);

    printf("Po zamianie:\n");
    printf("Zmienna x: %d\n", x);
    printf("Zmienna y: %d\n", y);
    printf("Zmienna dynamiczna1: %d\n", *dynamiczna1);
    printf("Zmienna dynamiczna2: %d\n", *dynamiczna2);

    free(dynamiczna1);
    free(dynamiczna2);

    return 0;
}
