#include <stdio.h>
#include <stdlib.h>

void print_bin(int number)
{
    int i = 0;
    char output[8];

    while (i < 8)
    {
        if (number & 1) output[7-i] = '1';
        else output[7-i] = '0';
        number >>= 1;
        i++;
    }
    printf("base_2:  %s\n", output);
}

int main()
{
    int a;
    printf("enter a number between 0 and 255: ");
    scanf("%d", &a);

    if (a/256 && a >=0 )
    {
        printf("number out of range!\n");
        exit(1);
    }

    printf("\n");

    print_bin(a);
    printf("base_10: %d\n", a);
    printf("base_16: %x\n", a);
    return 0;
}
