#ifndef __NLIBSTR_H_
#define __NLIBSTR_H_

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "getline.h"

void show_str(char *str);
void cls_buf();
int indexof_str(char *string, char character);
void stringCopy(char *source, char *dest);
int sizeof_str(char *buf);
void toupper_str(char *string);
void tolower_str(char *string);
int cmpsizeof_str(char *buf1, char *buf2);
int cmp_str(char *str1, char *str2);
void dynamic_cpystr(char *str_dinamic, char *content);
#endif /*NLIBSTR_H_*/