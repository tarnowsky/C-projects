#include <stdio.h>
#define MAXLINE 1000 /*dopuszczalna długość wiersza*/

int getline(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould"; /*wzorzec do wyszukania*/

//wyszukuje wiersze zawierające wzorzec
int main()
{
    char line[MAXLINE];
    int found = 0;

    while(getline(line, MAXLINE) > 0)
        if (strindex(line, pattern) >= 0)
        {
            printf("%s", line);
            found++;
        } 

    return found;
}

//pobiera wiersz do s, zwraca długość
int getline(char s[], int lim)
{
    int c, i = 0;
    
    while (--lim > 0 && (c=getchar()) != '\n') /*wczytując plik i myśląć o czytaniu wierszy, nie lini, powinno się dodać warunek EOF*/
        s[i++] = c;
    if (c=='\n')
        s[i++] = c;
    s[i] = '\0';

    return i;
}   

//zwraca index t w s lub -1, jeżeli nie występuje
int strindex(char s[], char t[])
{
    int i, j, k;
    
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++);
        if (t[k] == '\0')
            return i;
    }
    return -1;
}