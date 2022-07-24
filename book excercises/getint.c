#include <ctype.h>
#include <stdio.h>
#include "../ReversePolishNotation/getch.c"
#include "../ReversePolishNotation/calc.h"

int getint(int *);

int main()
{
    int n, array[1000];

    for (n = 0; n < 1000 && getint(&array[n]) != EOF; n++)
        ;
}

//getint: pobiera kolejną liczbę całkowitą do *pn
int getint(int *pn)
{
    int c, sign;

    while (!isdigit(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-')
    {
        ungetch(c);
        return 0;
    }
    sign = (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
        c = getch();
    for (*pn = 0; isdigit(c); c = getch())
        *pn = 10 * *pn + (c - '0');
    *pn *= sign;
    if (c != EOF)
        ungetch(c);
    return c;
}
