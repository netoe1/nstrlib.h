#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "./getline.h"

void show_str(char *str)
{
    int i;
    if (str != NULL)
    {
        for (i = 0; i < sizeof(str); i++)
        {
            if (str[i] == '\0')
            {
                printf("\\0");
            }
            else
            {
                printf("%c", str[i]);
            }
        }
    }
}
void cls_buf()
{
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
}
int indexof_str(char *string, char character)
{
    int i = 0;

    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == character)
        {
            return i;
        }
    }

    return -1;
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
int sizeof_str(char *buf)
{
    return sizeof(buf);
}
void toupper_str(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = toupper(string[i]);
    }
}
void tolower_str(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = tolower(string[i]);
    }
}
int cmpsizeof_str(char *buf1, char *buf2)
{
    if (sizeof(buf1) != sizeof(buf2))
    {
        return -1;
    }

    return 0;
}
int cmp_str(char *str1, char *str2)
{
    if (str1 != NULL && str2 != NULL)
    {
        for (int i = 0; i < strlen(str1); i++)
        {
            if (str1[i] != str2[i])
            {
                return 0;
            }
        }
    }
    else
    {
        return -1;
    }

    return 1;
}