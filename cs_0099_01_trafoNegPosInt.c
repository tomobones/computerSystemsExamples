#include <stdio.h>

int main()
{
    int v;

    printf("enter a signed int to be transformed: ");
    scanf("%d", &v);

    
    unsigned uv = (unsigned int) v;
    printf("\n");
    printf("v = %d, uv = %u\n", v, uv);


    return 0;
}
