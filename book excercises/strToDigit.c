#include <stdio.h>

int atoi(char s[]);
int isspace(int i);
int isdigit(int i);

int main()
{
    int x;
    char s[50] = {"-567928"};
    x = atoi(s);
    printf("%d", x);
    return 0;
}

int atoi(char s[])
{
    int i, n, sign;

    for (i = 0; isspace(s[i]); i++);
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i]-'0');
    return sign * n;
}