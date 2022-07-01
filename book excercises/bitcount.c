#include <stdio.h>

void writedown(int i, int c[]);
int base10to2(unsigned num, int c[]);

int main()
{
    unsigned x = 07676; 
    int i, c[36];

    writedown(base10to2(x, c), c);

    for (i = 0; x != 0; i++)
        x &= (x - 1);
    printf("%d", i);

    return 0;
}

int base10to2(unsigned num, int c[])
{
    int i = 0;
    for (i; num != 0; i++)
    {
        c[i] = num % 2;
        num /= 2;
    }
    return i;
}

void writedown(int i, int c[])
{
    for (i--; i >= 0; i--)
    {
        printf("%u", c[i]);
    }
    printf("\n");
}

