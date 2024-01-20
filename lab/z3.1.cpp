/******************************************************************************
switch - Patryk Nowoszynski

1. Napisz program który, po wybraniu dnia tygodnia, pokaże twój plan dnia (plan dnia wymyśl sam/sama). Wykorzystaj konstrukcję switch.

np:

        case 1:
        cout<<"Poniedziałek:"<<endl;
        cout<<"7:00 - pobudka, bieganie "<<endl;
        cout<<"8:00 - prysznic i śniadanie"<<endl;
        cout<<"9:00 - praca"<<endl;
        cout<<"14:00 - przerwa obiadowa"<<endl;
        cout<<"14:30 - praca"<<endl;
        cout<<"17:00 - zakupy"<<endl;
        cout<<"18:00 - siłownia"<<endl;
        cout<<"19:30 - kolacja"<<endl;
        cout<<"20:00 - relaks"<<endl;
        cout<<"20:30 - prysznic"<<endl;
        cout<<"20:45 - sen"<<endl;
        break;

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int dzienTygodnia;

    cout << "Podaj numer dnia tygodnia (1-7): ";
    cin >> dzienTygodnia;

    switch (dzienTygodnia) {
        case 1:
            cout << "Poniedziałek:" << endl;
            cout << "7:00 - pobudka, bieganie" << endl;
            cout << "8:00 - prysznic i śniadanie" << endl;
            cout << "9:00 - praca" << endl;
            cout << "14:00 - przerwa obiadowa" << endl;
            cout << "14:30 - praca" << endl;
            cout << "17:00 - zakupy" << endl;
            cout << "18:00 - siłownia" << endl;
            cout << "19:30 - kolacja" << endl;
            cout << "20:00 - relaks" << endl;
            cout << "20:30 - prysznic" << endl;
            cout << "20:45 - sen" << endl;
            break;
        case 2:
            cout << "Wtorek:" << endl;
            cout << "8:00 - pobudka" << endl;
            cout << "8:30 - śniadanie" << endl;
            cout << "9:30 - spotkanie w pracy" << endl;
            cout << "13:00 - przerwa obiadowa" << endl;
            cout << "14:00 - praca zdalna" << endl;
            cout << "17:30 - trening" << endl;
            cout << "19:00 - obiad" << endl;
            cout << "20:00 - czytanie książki" << endl;
            cout << "22:00 - sen" << endl;
            break;
        case 3:
            cout << "Środa:" << endl;
            cout << "6:30 - pobudka" << endl;
            cout << "7:00 - jogurt i owocowy koktajl" << endl;
            cout << "8:00 - lekcje online" << endl;
            cout << "12:00 - przerwa na lunch" << endl;
            cout << "13:00 - zajęcia sportowe" << endl;
            cout << "16:00 - praca nad projektem" << endl;
            cout << "18:00 - gotowanie obiadu" << endl;
            cout << "20:00 - relaks przy filmie" << endl;
            cout << "22:30 - przygotowania do snu" << endl;
            break;
        case 4:
            cout << "Czwartek:" << endl;
            cout << "9:00 - pobudka" << endl;
            cout << "9:30 - śniadanie" << endl;
            cout << "10:30 - spotkanie biznesowe" << endl;
            cout << "14:00 - lunch z przyjaciółmi" << endl;
            cout << "16:00 - praca nad projektem" << endl;
            cout << "18:00 - fitness" << endl;
            cout << "20:00 - kolacja" << endl;
            cout << "21:00 - kurs online" << endl;
            cout << "23:00 - relaks" << endl;
            cout << "23:30 - sen" << endl;
            break;
        case 5:
            cout << "Piątek:" << endl;
            cout << "8:30 - pobudka" << endl;
            cout << "9:00 - śniadanie" << endl;
            cout << "10:00 - zakupy" << endl;
            cout << "12:00 - praca zdalna" << endl;
            cout << "15:00 - kawa z przyjaciółmi" << endl;
            cout << "17:30 - siłownia" << endl;
            cout << "19:00 - gotowanie kolacji" << endl;
            cout << "21:00 - wieczór filmowy" << endl;
            cout << "23:00 - relaks" << endl;
            cout << "23:30 - sen" << endl;
            break;
        case 6:
            cout << "Sobota:" << endl;
            cout << "10:00 - pobudka" << endl;
            cout << "10:30 - śniadanie" << endl;
            cout << "11:30 - spacer w parku" << endl;
            cout << "14:00 - grillowanie z przyjaciółmi" << endl;
            cout << "18:00 - relaks" << endl;
            cout << "20:00 - kolacja" << endl;
            cout << "21:30 - wieczór planszówek" << endl;
            cout << "23:00 - powrót do domu" << endl;
            cout << "24:00 - sen" << endl;
            break;
        case 7:
            cout << "Niedziela:" << endl;
            cout << "9:00 - pobudka" << endl;
            cout << "9:30 - leniwe śniadanie" << endl;
            cout << "11:00 - czytanie książki" << endl;
            cout << "13:00 - obiad" << endl;
            cout << "15:00 - spacery" << endl;
            cout << "18:00 - kolacja" << endl;
            cout << "20:00 - film lub serial" << endl;
            cout << "22:00 - przygotowania do snu" << endl;
            break;
        default:
            cout << "Podano nieprawidłowy numer dnia tygodnia." << endl;
            break;
    }

    return 0;
}
