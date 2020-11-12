#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

int main()
{
    short sx = -12345; /* -12345 */
    unsigned uy = sx; /* Mystery! */
    
    printf("conversion to longer bit length and unsigned\n");
    printf("in which order?\n\n");
    printf("sx = %d:\t\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));
    printf("uy = %u:\t", uy);
    show_bytes((byte_pointer) &uy, sizeof(unsigned));

    return 0;
}
