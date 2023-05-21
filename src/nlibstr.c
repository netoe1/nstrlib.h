#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "getline.h"
#include "nlibstr.h"

void nlibstr_show_str(char *str)
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
void nlibstr_clear_buffers()
{
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
}
int nlibstr_indexof_str(char *string, char character)
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
void nlibstr_stringCopy(char *source, char *dest)
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
int nlibstr_sizeof_str(char *buf)
{
    return sizeof(buf);
}
void nlibstr_toupper_str(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = toupper(string[i]);
    }
}
void nlibstr_tolower_str(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = tolower(string[i]);
    }
}
int nlibstr_cmpsizeof_str(char *buf1, char *buf2)
{
    if (sizeof(buf1) != sizeof(buf2))
    {
        return -1;
    }

    return 0;
}
int nlibstr_cmp_str(char *str1, char *str2)
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

void nlibstr_dynamic_cpystr(char *str_dinamic, char *content)
{
    int i;
    str_dinamic = (char *)malloc(sizeof(str_dinamic));

    str_dinamic[sizeof(str_dinamic)] = '\0';
    for (i = 0; i < sizeof(str_dinamic); i++)
    {
        str_dinamic[i] = content[i];
    }
}

int nlibstr_index_of(const char find, const char *string)
{
    int i = 0;
    for (i = 0; i < sizeof(string); i++)
    {
        if (string[i] == find)
        {
            return i;
        }
    }
    return -1;
}

void nlibstr_parse_non_spaces(char *string, char *string_dinamic)
{
    int i = 0;

    string_dinamic = (char *)malloc(1);

    for (i = 0; i < sizeof(string); i++)
    {
        if (string[i] != ' ')
        {
            string_dinamic[i] = string[i];
            string_dinamic = (char *)realloc(string_dinamic, i + 1);
        }
    }

    string_dinamic[++i] = '\0';
}