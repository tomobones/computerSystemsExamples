#include <stdio.h>
#include <string.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y; /* step 1 */
    *x = *x ^ *y; /* step 2 */
    *y = *x ^ *y; /* step 3 */
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt-1; first < last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}

void print_array(int a[], int cnt)
{
    int i;
    for (i = 0; i < cnt; i++)
        printf("%d", a[i]);
    printf("\n");
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};

    printf("the original array is: ");
    print_array(a, 6);

    reverse_array(a, 6);

    printf("the reversed array is: ");
    print_array(a, 6);

    return 0;
}
