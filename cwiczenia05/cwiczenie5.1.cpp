/******************************************************************************

                              Zadanie 5.1 - Patryk Nowoszynski

Ćwiczenie 5.1

Napisz program, który poprosi Cię o wpisanie średniej ocen dla każdego ucznia w szkole (4 klasy, a w każdej z nich 5 uczniów) oraz wyświetli wpisane wartości na ekranie.


#include <stdio.h>
float MojaSzkola[4][5];
int licz1, licz2;
int main()

{
    for (licz1 = 0; licz1 < 4; licz1++)
       {
        for(licz2 = 0; licz2 < 5; licz2++)
        {
            printf("\n\nWpisz srednia ocen %d-ego ", 
                licz2+1);
            printf("ucznia %d-ej klasy: ", licz1+1);
            scanf("%f", &MojaSzkola[licz1][licz2]);
        }
       }

       for (licz1 = 0; licz1 < 4; licz1++) 
        {
            for (licz2 = 0; licz2 < 5; licz2++)
            {
              printf("\n\nSrednia ocen %d-ego ucznia\n " ,
              licz2+1);
              printf("%d-ej klasy wynosi: %f\n", licz1+1,
              MojaSzkola[licz1][licz2]);  
            }
        }
        return 0;
}

*******************************************************************************
W powyższym programie używamy dwuwymiarowej tablicy MojaSzkola o rozmiarze 4x5, gdzie wiersze odpowiadają klasom, a kolumny uczniom. 
Za pomocą zagnieżdżonych pętli for pobieramy od użytkownika średnią ocen dla każdego ucznia, a następnie wyświetlamy wpisane wartości na ekranie.
Przykładowe wykonanie programu może wyglądać następująco:

Wpisz średnią ocen 1-ego ucznia 1-ej klasy: 4.5
Wpisz średnią ocen 2-ego ucznia 1-ej klasy: 4.0
Wpisz średnią ocen 3-ego ucznia 1-ej klasy: 3.8
Wpisz średnią ocen 4-ego ucznia 1-ej klasy: 4.2
Wpisz średnią ocen 5-ego ucznia 1-ej klasy: 4.7

... (pozostałe wpisywanie ocen dla pozostałych uczniów i klas)

Średnia ocen 1-ego ucznia 1-ej klasy wynosi: 4.5
Średnia ocen 2-ego ucznia 1-ej klasy wynosi: 4.0
Średnia ocen 3-ego ucznia 1-ej klasy wynosi: 3.8
Średnia ocen 4-ego ucznia 1-ej klasy wynosi: 4.2
Średnia ocen 5-ego ucznia 1-ej klasy wynosi: 4.7

... (wyświetlanie średnich ocen dla pozostałych uczniów i klas)

*******************************************************************************/

#include <stdio.h>

float MojaSzkola[4][5];
int licz1, licz2;

int main()
{
    for (licz1 = 0; licz1 < 4; licz1++)
    {
        for (licz2 = 0; licz2 < 5; licz2++)
        {
            printf("\n\nWpisz średnią ocen %d-ego ucznia %d-ej klasy: ", licz2+1, licz1+1);
            scanf("%f", &MojaSzkola[licz1][licz2]);
        }
    }

    for (licz1 = 0; licz1 < 4; licz1++)
    {
        for (licz2 = 0; licz2 < 5; licz2++)
        {
            printf("\n\nŚrednia ocen %d-ego ucznia %d-ej klasy wynosi: %f\n", licz2+1, licz1+1, MojaSzkola[licz1][licz2]);
        }
    }

    return 0;
}
