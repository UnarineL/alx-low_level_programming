#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * strtow - string to words
 * @str: source
 *
 * Return: word
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, n;

    if (str == NULL || *str == '\0')
        return NULL;

    /* count number of words */
    n = 0;
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (!isspace(str[i]) && (i == 0 || isspace(str[i - 1])))
            ++n;
    }

    /* allocate memory for words array */
    words = malloc((n + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    /* allocate memory for each word */
    i = j = 0;
    k = 0;
    while (str[i] != '\0')
    {
        while (isspace(str[i]))
            ++i;
        if (str[i] == '\0')
            break;
        j = i;
        while (!isspace(str[j]) && str[j] != '\0')
            ++j;
        words[k] = malloc((j - i + 1) * sizeof(char));
        if (words[k] == NULL)
        {
            /* allocation failure, free previously allocated memory */
            while (--k >= 0)
                free(words[k]);
            free(words);
            return NULL;
        }
        strncpy(words[k], str + i, j - i);
        words[k][j - i] = '\0';
        ++k;
        i = j;
    }
    words[k] = NULL;

    return words;
}

