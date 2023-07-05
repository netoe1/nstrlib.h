#include <stdio.h>
#include <stdlib.h>

size_t getline_px0(char **lineptr, size_t *n, FILE *stream)
{
    if (lineptr == NULL || n == NULL || stream == NULL)
    {
        return -1;
    }

    size_t len = 0;
    size_t num_chars = 0;
    char *line = *lineptr;

    /* Aloca memória inicialmente se lineptr aponta para NULL ou se n é 0 */
    if (line == NULL || *n == 0)
    {
        *lineptr = malloc(128);
        if (*lineptr == NULL)
        {
            return -1;
        }
        *n = 128;
        line = *lineptr;
    }

    while (1)
    {
        int c = fgetc(stream);

        /* Se atingir o final do arquivo ou ocorrer um erro na leitura, retorna o número de caracteres lidos */
        if (c == EOF)
        {
            if (num_chars == 0)
            {
                return -1;
            }
            break;
        }

        /* Realoca a memória se a string estiver cheia */
        if (len >= *n - 1)
        {
            *n *= 2;
            char *new_line = realloc(line, *n);
            if (new_line == NULL)
            {
                return -1;
            }
            line = new_line;
            *lineptr = new_line;
        }

        /* Adiciona o caractere lido à string */
        line[len] = c;
        len++;
        num_chars++;

        /* Se atingir um caractere de quebra de linha, retorna a string lida */
        if (c == '\n')
        {
            break;
        }
    }

    /* Adiciona o caractere nulo à string */
    line[len] = '\0';

    return num_chars;
}
