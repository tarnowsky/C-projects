#include <stdio.h>
#include "calc.h"

#define BUFSIZE 100

char buf[BUFSIZE]; /*bufor dla ungetch*/
int bufp = 0;      /*następna wolna pozycja w buforze*/

int getch(void) /*pobiera znak (może być znakiem wcześniej wycofanym)*/
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) /*wycofuje znak do strumienia danych wejściowych*/
{
    if (bufp >= BUFSIZE)
        printf("ungetch: too many characters\n");
    else
        buf[bufp++] = c;
}