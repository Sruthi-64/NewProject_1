#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* sorted(char* str)
{
    int len = strlen(str),i,j;
    int count[256] = {0};
    for (i = 0; i < len; i++)
    {
        count[str[i]]++;

    }
    int unique = 0;
    for (i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            unique++;

        }
    }
    char* uniquechars = (char*)malloc((unique + 1) * sizeof(char));
    int index = 0;
    for ( i = 0; i < 256; i++)
    {
        if (count[i] > 0)
        {
            uniquechars[index] = i;

            index++;

        }
    }
    uniquechars[index] = '\0';


    return uniquechars;
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    gets(str);
    char*s=str;
    char* uniquesort = sorted(s);
    if (uniquesort != NULL)
    {
        printf("Unique characters (sorted): %s\n", uniquesort);
        free(uniquesort);
    }
}
