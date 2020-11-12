// **********************************
// *                                *
// *  display the content of a      *
// *  variable as it is saved in    *
// *  memory as a hex bytes         *
// *                                *
// *                                *
// *                                *
// *                                *
// **********************************


#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void* x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival = val;
   
    printf("int for %d:  ", val); 
    show_int(ival);
    
    printf("int for %d: ", -val); 
    show_int(-ival);
}

int main()
{
    int val;
    printf("show hex value in memory for integer and its negative\n\n");

    printf("please enter a value: ");
    scanf("%d", &val);
    test_show_bytes(val);
    return 0;
}
