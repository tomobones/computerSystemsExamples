// boilerplate.c

#include <stdio.h>
#include "cs_lib.h"

int main()
{
    int i = 127;
    float j = 127;
    show_bin_bytes((byte_pointer)&i, sizeof(int));
    show_bin_bytes((byte_pointer)&j, sizeof(float));
    return 0;
}
