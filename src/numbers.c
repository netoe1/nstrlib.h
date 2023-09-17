#include "../include/numbers.h"
#include <stdlib.h>

char NUM_verifyValidNumber_int_to_char(int number)
{
    if (&number != NULL)
    {
        if (number >= 0 && number <= 9)
            return (number + '0');
    }
}

int NUM_verifyValidNumber_char_to_int(char number)
{
    if (&number != NULL)
    {
        return (number - '0');
    }
}