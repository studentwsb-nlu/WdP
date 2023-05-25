/******************************************************************************

                              Zadanie 7 - Tablica 1 - Patryk Nowoszynski

Napisz program w języku C po przeanalizowaniu poniższego programu.
#include <iostream>
using namespace std;
int main()
{
const int size = 10;
int* a = new int[size];
cout << "sizeof(int) = "<< sizeof(int) << endl;
for(int i = 0; i < size; i++)
cout << "&a[" << i << "] = " << (long)&a[i] <<endl ;
// system("pause");
}
Następnie zmodyfikuj program tak, aby dodatkowo utworzył tablicę znaków.
Zadbaj o to, aby program przed zakończeniem działania zwalniał pamięć zarezerwowaną
przez obydwie tablice.

W tym programie dodano deklarację tablicy znaków b oraz odpowiednie operacje na niej. Wyprowadzenie adresów pól tablicy b zostało również dodane do wyjścia.
Po zakończeniu działania programu, używamy operatora delete[] dla obu tablic (a i b), aby zwolnić zarezerwowaną przez nie pamięć.
Dzięki użyciu uintptr_t możemy uniknąć ostrzeżenia o utracie precyzji, ponieważ ten typ jest bezpieczny i gwarantuje wystarczającą szerokość do przechowywania wartości wskaźnika.

*******************************************************************************/
#include <iostream>
#include <cstdint>

int main() {
    const int size = 10;
    int* a = new int[size];
    char* b = new char[size];

    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    for (int i = 0; i < size; i++)
        std::cout << "&a[" << i << "] = " << reinterpret_cast<uintptr_t>(&a[i]) << std::endl;

    for (int i = 0; i < size; i++)
        std::cout << "&b[" << i << "] = " << reinterpret_cast<uintptr_t>(&b[i]) << std::endl;

    delete[] a;
    delete[] b;

    return 0;
}
