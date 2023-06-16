/******************************************************************************

                              Zadanie 4.7 - Patryk Nowoszynski

Ćwiczenie 4.7

Napisz funkcję escape(s,t), która przepisuje ciąg t do zmiennej s, konwertując znaki takie jak znak nowego wiersza i tabulator na sekwencje sterujące takie jak \n i \t. 
Użyj instrukcji switch. Napisz następnie funkcję wykonującą odwrotną operację — konwersję sekwencji sterujących na właściwe znaki.

*******************************************************************************

*******************************************************************************/

#include <stdio.h>

void escape(char s[], char t[])
{
    int i = 0;
    int j = 0;

    while (t[i] != '\0')
    {
        switch (t[i])
        {
            case '\n':
                s[j++] = '\\';
                s[j] = 'n';
                break;
            case '\t':
                s[j++] = '\\';
                s[j] = 't';
                break;
            default:
                s[j] = t[i];
                break;
        }

        i++;
        j++;
    }

    s[j] = '\0';
}

int main()
{
    char t[] = "Hello\nWorld\t!";
    char s[20];

    escape(s, t);

    printf("Przekonwertowany ciąg: %s\n", s);

    return 0;
}
