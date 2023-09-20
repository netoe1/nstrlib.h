#ifndef NSTRLIB_H
#define NSTRLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "../include/getline.h"

int NLSTR_countStr(char *str);
void NLSTR_show_str(char *str);
void NLSTR_clearBuffers();
int NLSTR_indexof_str(char *string, char character);
void NLSTR_stringCopy(char *source, char *dest);
int NLSTR_sizeof_str(char *buf);
void NLSTR_toupper_str(char *string);
void NLSTR_tolower_str(char *string);
int NLSTR_cmpsizeof_str(char *buf1, char *buf2);
int NLSTR_cmp_str(char *str1, char *str2);
void NLSTR_dynamic_cpystr(char *str_dinamic, char *content); // Warning! // Non-tested yet...
int NLSTR_index_of(const char find, const char *string);
void NLSTR_parse_non_spaces(char *string, char *string_dinamic); // Non-tested yet...
char *NLSTR_getline();                                           // Warning!, non-tested yet...
int NLSTR_ConcatStr(char *str1, char *str2, char *p);            /*Warning, this function uses dinamic allocation. Please, free() the pointer after usage, to avoid memory leaks*/
int NLSTR_invertStr(char *str);
int NLSTR_countStrings(char **ptr);
void NLSTR_clearInputBuffer();
void NLSTR_clearOutputBuffer();

int NLSTR_number_str_to_int(char *number_in_str);
#endif /*NLIBSTR_H_*/