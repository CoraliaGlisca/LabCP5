#include <stdio.h>

void find_frequency(char s[], int count[]);

int main()
{
    char s[100];
    int i;
    int count[26] = {0};
    printf("Input a string:");

    gets(s);

    nr_of_times(s, count);

    printf("Character count:");

    for(i = 0 ; i < 26 ; i++)
    {
        printf("\n%c \t %d\n", i + 'a', count[i]);
    }
    return 0;
}

void nr_of_times(char s[], int count[])
{
    int i;

    for(i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' )
        {
            count[s[i]-'a']++;
        }
    }
}
