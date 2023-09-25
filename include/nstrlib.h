#ifndef NSTRLIB_H
#define NSTRLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../include/getline.h"

void NLSTR_show_str(char *str);
void NLSTR_clearBuffers();
int NLSTR_indexof(char *string, char character);
void NLSTR_stringCopy(char *source, char *dest);
int NLSTR_sizeof(char *buf)
void NLSTR_toupper(char *string);
void NLSTR_tolower(char *string);
int NLSTR_cmpsizeof(char *buf1, char *buf2);
int NLSTR_cmp(char *str1, char *str2);
void NLSTR_dynamic_cpy(char *str_dinamic, char *content);
int NLSTR_indexof(const char find, const char *string);
void NLSTR_parse_non_spaces(char *string, char *string_dinamic);
char *NLSTR_getline();
int NLSTR_Count(char *str);
int NLSTR_Concat(char *str1, char *str2, char *p);
int NLSTR_invert(char *str);
int NLSTR_countStrings(char **ptr);
void NLSTR_clearInputBuffer();
void NLSTR_clearOutputBuffer();
void NLSTR_clearErrorBuffer();
int NLSTR_number_str_to_int(char *number_in_str);

#endif /*NLIBSTR_H_*/