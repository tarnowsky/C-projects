#include <stdio.h>

int base10to2(int n, int c[]);
void writeDown(int i, int c[]);
int setbits(int x, int p, int n, int y);

int main()
{
    int x, p, n, y, c[36];
    
    x = 36;
    y = 11;
    p = 1;
    n = 3;

    printf("x = ");
    writeDown(base10to2(x, c), c);
    printf("y = ");
    writeDown(base10to2(y, c), c);

    x = setbits(x, p, n, y);

    printf("x = ");
    writeDown(base10to2(x,c),c);

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

int setbits(int x, int p, int n, int y)
{
    int n1;
    n1 = ~(~0 << n);
    // y &= n1;
    // y <<= p - 1;
    // x &= ~(n1 << p-1);
    // x |= y;
    x = (x & ~(n1 << (p - 1))) | ((y & n1) << (p - 1));
    return x;
}