#include <stdio.h>

int main()
{
    int i, k;
    char c[36], a;

    for (k=0;(c[k] = getchar()) != '\n'; k++);
    for (i=0; i < k; i++)
        printf("%c", (c[i] >= 'A' && c[i] <= 'Z') ? c[i] - 'A' + 'a' : c[i]);



    return 0;
}