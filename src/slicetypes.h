#include <stdlib.h>

/*
    This slice only works with strings with size defined!
*/
void dynamic_internal_slice_1(char *ptr, char *content, int firstOcurrence, int secondOcurrence)
{
    int sz_newstr = secondOcurrence - firstOcurrence;
    if (ptr == NULL)
    {
        ptr = (char *)malloc(sizeof(char) * sz_newstr);
        ptr[sz_newstr] = '\0';
        return;
    }
    for (int i = firstOcurrence, j = 0; i < secondOcurrence, j < sz_newstr; i++, j++)
    {
        ptr[j] = content[i];
    }
}