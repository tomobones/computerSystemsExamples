#include <stdio.h>
#include <string.h>

//todo: display memory of vars in hex/bits/... DONE
//      compare ints and floats
//      analyse floats: sign, mantisse, exponent
//      display strings as char arrays with 0 as last entry

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");

    char output[8];
    int j = 0;
    printf("binary:   ");
    for (i = 0; i < len; i++)
    {
        j = 0;
        while (j < 8)
        {
            if (start[i] & 1) output[7-j] = '1';
            else output[7-j] = '0';
            start[i] >>= 1;
            j++;
        }
        for (int k = 0; k < 8; k++) printf("%c", output[k]);
        printf(" ");
    } 
    printf("\n\n");
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

// not yet working
void show_string(string x)
{
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void test_show_bytes(int val)
{
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
   
    printf("int:     "); 
    show_int(ival);
    printf("float:   "); 
    show_float(fval);
    printf("pointer: "); 
    show_pointer(pval);
}

int main()
{
    int val;

    printf("please enter a value: ");
    scanf("%d", &val);
    test_show_bytes(val);
    return 0;
}
