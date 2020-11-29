// **********************************
// *                                *
// *      reusable code for all     *
// *      code examples             *
// *                                *
// *                                *
// **********************************

#include <stdbool.h>

typedef unsigned char *byte_pointer;

void show_hex_bytes(byte_pointer start, size_t len);
void show_bin_bytes(byte_pointer start, size_t len);
bool is_little_endian();
unsigned replace_byte (unsigned x, int i, unsigned char b);
