#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "./getline.h"

int i;

void clearBuffer()
{
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
}
unsigned int stringIndof(char const *string, char charll_locate)
{
    /*
        OBS:USING SEQUENTIAL SEARCH!
    */
    i = 0;

    while (string[i] != charll_locate)
    {
        i++;
    }

    return i++;
}
void getString_(char *string)
{ /*Warning, this function can generate memory leak or stack overflow!*/

    /*
        Use this function to get char pointers with not sizes!
        This function can be considered unsafe if the vector has a certain size.
    */

    int i;
    char aux;

    for (i = 0;; i++)
    {
        aux = getchar();
        if (aux != '\n')
        {
            string[i] = aux;
        }
        else
        {
            string[i] = '\0';
            break;
        }
    }
    return;
}
void stringCopy(char *source, char *dest)
{
    if (sizeof(source) != sizeof(dest))
    {
        printf("\nThe both strings must have the same size!\n");
        return;
    }

    int i = 0;

    while (dest[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
}
int stringGetSize(char *buf)
{
    return sizeof(buf);
}
void toUpperCase_optimized(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = toupper(string[i]);
    }
}
void toLowerCase_optimized(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = tolower(string[i]);
    }
}
int stringCpSizes(char *buf1, char *buf2)
{
    if (sizeof(buf1) != sizeof(buf2))
    {
        return -1;
    }

    return 0;
}
int cmpStrings(char *str1, char *str2)
{
    if (str1 != NULL && str2 != NULL)
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            if (str1[i] != str2[i])
            {
                return -1;
            }
        }
    }
    else
    {
        return -1;
    }

    return 1;
}