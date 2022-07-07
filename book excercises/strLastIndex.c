#include <stdio.h>

strindex(char s[], char t[]);

main()
{
    char t[10] = "not", s[64];
    int i, c;
    for (i = 0; (c = getchar()) != '\n'; i++)
        s[i] = c;
    s[++i] = '\0';
    printf("%d", strindex(s, t));

    return 0;
}

strindex(char s[], char t[])
{
    int i, j, k, index = -1;

    for (i=0; s[i] != '\0'; i++)
    {
        k = i;
        for (j=0; s[i] == t[j] && t[j] != '\0'; j++, i++);
        if (t[j] == '\0')
                index = k;
        
    }
    return index;
}