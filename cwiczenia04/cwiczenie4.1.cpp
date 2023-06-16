/******************************************************************************

                              Zadanie 4.1 - Patryk Nowoszynski

Ćwiczenie 4.1

Napisz program, który pobierze z klawiatury wartość od 1 - 3, a następnie, w zależności od podanej wartości, kona odpowiedni blok instrukcji.

#include <stdio.h>
int wartosc;
main()

{
    printf("Wpisz wartosc od 1-3:");
    scanf(%d, &wartosc);
    switch (wartosc)

        case 1:

            {
                printf("Wpisales 1");
                break;
            }

        case 2:

            {
                printf("Wpisales 2");
                break;
            }

        case 3:

            {
                printf("Wpisales 3");
                break;
            }

        default:
            {
                printf("Zle wpisales");
            }
        }
        return 0;
}

 
Spróbuj zmodyfikować powyższy program, wymazując wszystkie instrukcje "break",  a następnie skompiluj i uruchom program.  Co się dzieje?


*******************************************************************************
Po skompilowaniu i uruchomieniu tego programu, jeśli wpiszesz na przykład wartość 2, otrzymasz następujący wynik:
Wpisales 2
Wpisales 3
Zle wpisales

Wartość 2 pasuje do przypadku case 2, dlatego zostanie wyświetlony komunikat "Wpisales 2". 
Następnie, program będzie kontynuował i wyświetli komunikat "Wpisales 3", pomimo że wartość 2 nie pasuje do przypadku case 3. 
Ostatecznie, zostanie również wyświetlony komunikat "Zle wpisales" jako część bloku default, ponieważ nie było żadnego break przed nim.
Usunięcie instrukcji break powoduje, że bloki instrukcji case są wykonywane sekwencyjnie, bez przerwania. Jest to znane jako "przepływ w dół" (fall-through). 
Aby kontrolować przepływ w switch, zazwyczaj używa się instrukcji break, aby zakończyć dany blok instrukcji.
*******************************************************************************/

#include <stdio.h>

int wartosc;

int main()
{
    printf("Wpisz wartosc od 1-3: ");
    scanf("%d", &wartosc);

    switch (wartosc)
    {
        case 1:
        {
            printf("Wpisales 1\n");
        }
        case 2:
        {
            printf("Wpisales 2\n");
        }
        case 3:
        {
            printf("Wpisales 3\n");
        }
        default:
        {
            printf("Zle wpisales\n");
        }
    }

    return 0;
}
