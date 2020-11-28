// boilerplate.c

#include <stdio.h>

int main()
{
    unsigned int i, j, s;
    printf("Check, whether unsigned numbers will overflow\n");
    printf("please enter first number:");
    scanf("%u", &i);
    printf("please enter second number:");
    scanf("%u", &j);
    s = i+j;
    if (s < i || s < j)
        printf("there will be an overflow");
    else
        printf("there will be no overflow");

    return 0;
}
