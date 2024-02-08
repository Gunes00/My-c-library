#include "altlib.h"
int alt_isalnum(int c)
{
    if(alt_isalpha(c) || alt_isdigit(c))
        return(1);
    return(0);
}
