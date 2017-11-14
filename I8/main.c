#include <stdio.h>
#include <string.h>

void main()
{
    char s[200];
    int count = 0, i;
    int f = 0;
    printf("Enter the string:");
    gets(s);

    for (i=0; i<strlen(s); i++)
    {
        if (s[i] == ' ')
            f = 0;
        else
        {
            if (f == 0)
                    count++;
                    f = 1;
        }
    }
    printf("Number of words in given string are: %d", count);
}
