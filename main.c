#include "src/altlib.h"

int main()
{
    char *a = "selam";
    a = alt_memset(a,'0',5);
    printf("%s",a);

}
