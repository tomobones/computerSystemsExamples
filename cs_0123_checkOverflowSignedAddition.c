#include <stdio.h>

int main()
{
    short i, j, s;
    printf("Check, whether signed numbers will overflow\n");
    printf("please enter first number:  ");
    scanf("%hi", &i);
    printf("please enter second number: ");
    scanf("%hi", &j);
    
    s = i+j;
    
    if (s <= 0 && i > 0 && j > 0)
        printf("There will be an positive overflow");
    else if (s >= 0 && i < 0 && j < 0)
        printf("There will be an negative overflow");
    else
        printf("There will be no overflow");
    printf("\n");

    return 0;
}
