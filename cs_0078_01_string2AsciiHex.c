#include <stdio.h>

int main()
{
    char input[100];
    printf("please enter a string: ");
    scanf("%s", input);
    printf("'%s' has ascii hex values: ", input);

    int i = 0;
    char* pointer = input;
    while (*(pointer + i) != 0)
    {
        printf("%.2x ", *(pointer + i));
        i++;
    }
    printf("\n\n");

    return 0;
}
