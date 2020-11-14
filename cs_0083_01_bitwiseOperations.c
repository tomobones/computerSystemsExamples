#include <stdio.h>

int main()
{
    printf("\n ~6 = %d", ~ 6);
    printf("\n6 & 5 = %d", 6 & 5);
    printf("\n6 | 5 = %d", 6 | 5);
    printf("\n6 ^ 5 = %d", 6 ^ 5);

    // applying masks
    printf("\n%x & %x = %x", 0x89ABCDEF, 0xFF00, 0x89ABCDEF & 0xFF00);

    printf("\n");
    return 0;
}
