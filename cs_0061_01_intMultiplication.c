#include <stdio.h>

int main()
{
    int a = 200;
    int b = 300;
    int c = 400;
    int d = 500;

    printf("limited bit presentation yield special cases:\n\n");
    printf("overflow of ints\n");
    printf("%d * %d * %d * %d = %d\n\n", a, b, c, d, a*b*c*d);

    float x = 3.14;
    float y = 1e20;

    printf("lack of associativity for floats\n");
    printf("(%f + %f) - %f = %f\n", x, y, y, (x+y)-y);
    printf("%f + (%f  - %f) = %f\n\n", x, y, y, x+(y-y));

    return 0;
}
