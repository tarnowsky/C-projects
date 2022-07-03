#include <stdio.h>
#include <string.h>

int main()
{
    int j, i, k;
    char c[30] = {'1', '2', '3', '4'};

    for (i=0, j = strlen(c)-1; i<j; i++, j--)
        k = c[i], c[i] = c[j], c[j] = k;
    
    for (i=0; c[i]!='\0'; i++)
        printf("%c", c[i]);



    return 0;
}