#include <stdio.h>
#include <stdlib.h>
#include "101-strtow.h"

int main(void)
{
    char **tab;
    int i;

    tab = strtow("      ALX School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    for (i = 0; tab[i] != NULL; i++)
    {
        printf("%s\n", tab[i]);
        free(tab[i]);
    }
    free(tab);
    return (0);
}
