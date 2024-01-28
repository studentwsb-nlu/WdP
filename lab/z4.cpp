/******************************************************************************
Miesiące słownie (switch case) - Patryk Nowoszynski

Napisz program, który wczyta numer miesiąca i wypisze jego pełną nazwę. W przypadku, gdy zostanie po podana liczba, 
która nie jest numerem miesiąca powinien zostać wyświetlony komunikat „To nie jest prawidłowy numer miesiąca”.
Do rozwiązania wykorzystaj konstrukcji switch case. Do wyświetlania komunikatu o błędnym numerze miesiąca użyj przypadku domyślnego default.

Wejście
Wejście zawiera jedną liczbę naturalną n.
Wyjście
Wyjście zawiera jeden wiersz: nazwę miesiąca o podanym numerze.

Przykład
Dla danych wejściowych:2

poprawnym wynikiem jest:luty

Dla danych wejściowych:32

poprawnym wynikiem jest:To nie jest prawidlowy numer miesiaca

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int numerMiesiaca;
    
    cout << "Podaj numer miesiaca: ";
    cin >> numerMiesiaca;

    switch (numerMiesiaca) {
        case 1:
            cout << "Styczen" << endl;
            break;
        case 2:
            cout << "Luty" << endl;
            break;
        case 3:
            cout << "Marzec" << endl;
            break;
        case 4:
            cout << "Kwiecien" << endl;
            break;
        case 5:
            cout << "Maj" << endl;
            break;
        case 6:
            cout << "Czerwiec" << endl;
            break;
        case 7:
            cout << "Lipiec" << endl;
            break;
        case 8:
            cout << "Sierpien" << endl;
            break;
        case 9:
            cout << "Wrzesien" << endl;
            break;
        case 10:
            cout << "Pazdziernik" << endl;
            break;
        case 11:
            cout << "Listopad" << endl;
            break;
        case 12:
            cout << "Grudzien" << endl;
            break;
        default:
            cout << "To nie jest prawidlowy numer miesiaca" << endl;
            break;
    }

    return 0;
}
