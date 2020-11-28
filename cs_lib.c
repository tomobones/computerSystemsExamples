// **********************************
// *                                *
// *  reusable code for all         *
// *  cs code examples              *
// *                                *
// **********************************


#include <stdio.h>
#include <math.h>

typedef unsigned char *byte_pointer;

void show_hex_bytes(byte_pointer start, size_t len)
{
    int i;
    int hex_representation;

    printf("hex representation: ");
    for (i = len-1; i >= 0; i--)
        printf("%02x ", start[i]);
    printf("\n");
}

void show_bin_bytes(byte_pointer start, size_t len)
{
    int i, j;
    int bin_representation;

    // loop over bytes - little endian
    printf("bin representation: ");
    for (i = len-1; i >= 0; i--)
    {
        bin_representation = 0;
        
        // loop over bits of one byte
        for (j = 0; j < 8; j++)
            bin_representation += (start[i] & (1 << j) ? 1 : 0) * pow(10, j);
        printf("%08d ", bin_representation);
    }
    printf("\n");

}

