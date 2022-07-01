#include <stdio.h>

int base10to2(int n, int c[]);
void writeDown(int i, int c[]);
int invert(int x, int p, int n);

int main()
{
    int a, p, n, c[32];

    a = 89;
    p = 1;
    n = 7;

    writeDown(base10to2(a, c), c);
    a = invert(a, p, n);
    writeDown(base10to2(a, c), c);

    return 0;
}


int base10to2(int n, int c[])
{
    if (n == 0)
    {
        c[0] = {0};
        return 1;
    }
        
    int i = 0;
    for (i; n != 0; i++)
    {
        c[i] = (n % 2);
        n = n / 2;
    }
    return i;
}

void writeDown(int i, int c[])
{
    for (--i; i >= 0; --i)
    {
        printf("%d", c[i]);
    }
    printf("\n");
}

int invert(int x, int p, int n)
{
    int n1;
    n1 = (~(~0 << n)) << p - 1;
    x ^= n1;

    return x;
}