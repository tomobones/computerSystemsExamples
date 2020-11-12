#include <stdio.h>
#include <stdlib.h>

void print_bin(int number)
{
    int i = 0;
    int aux_number;

    printf("base_2:  ");
    while (i < 8)
    {
        aux_number = number >> (7-i);
        if (aux_number & 1) printf("1");
        else printf("0");
        i++;
    }
    printf("\n");
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
