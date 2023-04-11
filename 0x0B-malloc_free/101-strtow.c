#include <stdlib.h>
#include "101-strtow.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: If str is NULL, str is "", or memory allocation fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    int i, j, k, len, words;
    char **tab;

    if (str == NULL || *str == '\0')
        return (NULL);

    len = 0;
    for (i = 0; str[i]; i++)
        len++;

    tab = malloc(sizeof(char *) * (len + 1));
    if (tab == NULL)
        return (NULL);

    words = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            words++;
    }

    i = 0;
    for (j = 0; j < words; j++)
    {
        while (str[i] == ' ')
            i++;

        len = 0;
        while (str[i + len] && str[i + len] != ' ')
            len++;

        tab[j] = malloc(sizeof(char) * (len + 1));
        if (tab[j] == NULL)
        {
            for (k = 0; k < j; k++)
                free(tab[k]);
            free(tab);
            return (NULL);
        }

        for (k = 0; k < len; k++)
            tab[j][k] = str[i + k];
        tab[j][k] = '\0';
        i += len;
    }
    tab[j] = NULL;

    return (tab);
}
