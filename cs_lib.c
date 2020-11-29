// **********************************
// *                                *
// *  reusable code for all         *
// *  cs code examples              *
// *                                *
// **********************************


#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "cs_lib.h"

typedef unsigned char *byte_pointer;

void show_hex_bytes(byte_pointer start, size_t len)
{
    int i;
    int hex_representation;
    int ordered_index;

    printf("hex representation: ");
    for (i = 0; i < len; i++)
    {
        ordered_index = is_little_endian() ? len - 1 - i : i;
        printf("%02x ", start[ordered_index]);
    }
    printf("\n");
}

void show_bin_bytes(byte_pointer start, size_t len)
{
    int i, j;
    int bin_representation;
    int ordered_index;

    // loop over bytes - little endian
    printf("bin representation: ");
    for (i = 0; i < len; i++)
    {
        bin_representation = 0; 
        ordered_index = is_little_endian() ? len - 1 - i : i;
        
        // loop over bits of one byte
        for (j = 0; j < 8; j++)
            bin_representation += (start[ordered_index] & (1 << j) ? 1 : 0) * pow(10, j);
        printf("%08d ", bin_representation);
    }
    printf("\n");

}

bool is_little_endian()
{
    int one = 1;
    if ((&one)[0] & 1)
        return true;
    else
        return false;
}

unsigned replace_byte (unsigned x, int i, unsigned char b)
{
    unsigned x_replaced = x;
    int index = is_little_endian() ? i : sizeof(unsigned) - 1 - i;
    ((byte_pointer)&x_replaced)[index] = b;
    return x_replaced;
}
