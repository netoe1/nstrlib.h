#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../include/getline.h"
#include "../include/nstrlib.h"

void NLSTR_show_str(char *str)
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
void NLSTR_clearBuffers()
{
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
}
int NLSTR_indexof_str(char *string, char character)
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
void NLSTR_stringCopy(char *source, char *dest)
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
int NLSTR_sizeof_str(char *buf)
{
    return sizeof(buf);
}
void NLSTR_toupper_str(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = toupper(string[i]);
    }
}
void NLSTR_tolower_str(char *string)
{
    int i;
    for (i = 0; i < sizeof(string); i++)
    {
        string[i] = tolower(string[i]);
    }
}
int NLSTR_cmpsizeof_str(char *buf1, char *buf2)
{
    if (sizeof(buf1) != sizeof(buf2))
    {
        return -1;
    }

    return 0;
}
int NLSTR_cmp_str(char *str1, char *str2)
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
void NLSTR_dynamic_cpystr(char *str_dinamic, char *content)
{
    int i;
    str_dinamic = (char *)malloc(sizeof(str_dinamic));

    str_dinamic[sizeof(str_dinamic)] = '\0';
    for (i = 0; i < sizeof(str_dinamic); i++)
    {
        str_dinamic[i] = content[i];
    }
}
int NLSTR_index_of(const char find, const char *string)
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
void NLSTR_parse_non_spaces(char *string, char *string_dinamic)
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
char *NLSTR_getline()
{
    char buffer[1024];
    char *res;
    setbuf(stdin, NULL);
    fgets(buffer, strlen(buffer) - 1, stdin);
    res = (char *)malloc(sizeof(char) * strlen(buffer));
    strncpy(res, buffer, strlen(buffer));
    res[sizeof(res)] = '\0';
    return res;
}
int NLSTR_countstr(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i + 1;
}

int NLSTR_ConcatStr(char *str1, char *str2, char *p)
{

    if (str1 != NULL && str2 != NULL && p != NULL)
    {
        const int len1 = strlen(str1) + 1;
        const int len2 = strlen(str2);

        p = (char *)malloc(sizeof(char) * len1 + len2);
        strncpy(p, str1, len1);
        strncat(p, str2, len2);
        p[len1 + len2] = '\0';
        return 1;
    }
    return 0;
}

int NLSTR_invertStr(char *str)
{
    if (str != NULL)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = str[strlen(str) - i - 1];
        }
    }
    return 0;
}

int NLSTR_countStrings(char **ptr)
{
    int len = 0;
    if (ptr != NULL)
    {
        while (ptr[len] != NULL)
        {
            len++;
        }
        return len;
    }
    return -1;
}

void NLSTR_clearInputBuffer()
{
    setbuf(stdin, NULL);
}

void NLSTR_clearOutputBuffer()
{
    setbuf(stdout, NULL);
}

void NLSTR_clearErrorBuffer()
{
    setbuf(stderr, NULL);
}