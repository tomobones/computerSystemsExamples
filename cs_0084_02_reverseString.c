#include <stdio.h>
#include <string.h>

void inplace_swap(char *x, char *y)
{
    *y = *x ^ *y; /* step 1 */
    *x = *x ^ *y; /* step 2 */
    *y = *x ^ *y; /* step 3 */
}

void reverse_array(char a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt-1; first< last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}

int main()
{
    char *str;

    printf("enter a string: ");
    scanf("%s", str);

    
    printf("the original array is: %s \n", str);

    reverse_array(str, strlen(str));

    printf("the reversed array is: %s \n", str);

    return 0;
}
