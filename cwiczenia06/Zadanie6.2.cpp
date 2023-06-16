/******************************************************************************

                              Zadanie 6.2 - Patryk Nowoszynski

Ćwiczenie 6.2

Napisz program, który stworzy tablicę liczb zmiennoprzecinkowych. Wypełnij tablicę kolejnymi liczbami za pomocą wzoru: ((i+1)/13*3).

*******************************************************************************
W tym programie używamy przykładowej tablicy arr o rozmiarze 5. Możesz zmodyfikować zawartość tablicy według własnych potrzeb.
Inicjalizujemy zmienne min, max i sum wartością pierwszego elementu tablicy arr[0]. Następnie przechodzimy przez pozostałe elementy tablicy za pomocą pętli for i aktualizujemy wartości min i max, jeśli znajdujemy mniejszą lub większą wartość. Dodatkowo, sumujemy wszystkie elementy w zmiennej sum.
Aby obliczyć średnią wartość, dzielimy sumę przez rozmiar tablicy, używając rzutowania na typ double, aby uzyskać wynik jako wartość zmiennoprzecinkową.
Na koniec, wyświetlamy wyniki na ekranie, wypisując minimalną wartość (min), maksymalną wartość (max) oraz średnią wartość (average).
*******************************************************************************/

#include <iostream>

int main() {
    const int size = 5;  // Rozmiar tablicy

    int arr[size] = {7, 2, 9, 4, 1};  // Przykładowa tablica liczb

    // Inicjalizacja zmiennych min i max wartościami pierwszego elementu tablicy
    int min = arr[0];
    int max = arr[0];
    int sum = arr[0];

    // Przechodzenie przez pozostałe elementy tablicy i aktualizacja min, max oraz sumy
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;  // Obliczenie średniej jako wartości zmiennoprzecinkowej

    // Wyświetlenie wyników
    std::cout << "Minimum: " << min << std::endl;
    std::cout << "Maksimum: " << max << std::endl;
    std::cout << "Średnia: " << average << std::endl;

    return 0;
}

