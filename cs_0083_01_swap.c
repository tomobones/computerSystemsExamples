#include <stdio.h>

void inplace(int *x, int *y)
{
    *y = *x ^ *y; /* step 1 */
    *x = *x ^ *y; /* step 2 */
    *y = *x ^ *y; /* step 3 */
}

int main()
{
    int x;
    int y;

    printf("please enter the value for x: ");
    scanf("%d", &x);

    printf("please enter the value for y: ");
    scanf("%d", &y);

    inplace(&x, &y);
    printf("after swapping, x has value %d, and y has value %d. \n", x, y);

    return 0;
}
