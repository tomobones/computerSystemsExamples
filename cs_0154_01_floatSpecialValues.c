#include <stdio.h>

#define POS_INFINITY 1e309
#define NEG_INFINITY -1e309
#define NEG_ZERO -1e-309

int main()
{
    float posinf = POS_INFINITY;
    float neginf = NEG_INFINITY;
    float negzero = NEG_ZERO;
    printf("%f\n", posinf);
    printf("%f\n", neginf);
    printf("%f\n", negzero);

    printf("%d\n", posinf);
    printf("%d\n", neginf);
    printf("%d\n", negzero);

    return 0;
}
