#include <stdio.h>

void shift_operations(int number)
{
    printf("\n");
    printf("shift operations with %d, %x in hexadecimal\n", number, number);
    printf("0x%x << %d = 0x%x or %d\n", number, 4, number << 4, number << 4);
    printf("0x%x >> %d = 0x%x or %d\n", number, 4, number >> 4, number >> 4);
}


int main()
{
    int number1 = 101;
    int number2 = 141;
    shift_operations(number1);
    shift_operations(number2);
    return 0;
}
