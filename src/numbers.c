// Std libraries including files...
#include <stdlib.h>

// Custom libraries....
#include "../include/numbers.h"
#include "../include/nstrlib.h"

#define STRCH_NULL = '\0'

static char *d_lettersUpper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static char *d_lettersLower = "abcdefghijklmnopqrstuvwxyz";
static char *d_numbersOneShot = "0123456789";


int isThisANumber(const char *str){
    if(str[0] == STRCH_NULL){
        return -1;
    }

    static int i = 0;

    for(i = 0;;i++){
        if(str[i] == '\0' || str[i] != d_numbersOneShot){
            return -1;
        }

    }

    return 0;
}