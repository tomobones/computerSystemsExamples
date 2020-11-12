#include <stdio.h>

typedef unsigned char *byte_pointer;                                            
                                                                                 
void show_bytes(byte_pointer start, size_t len)                                 
{                                                                               
    int i;                                                                      
    for (i = 0; i < len; i++)                                                   
        printf(" %.2x", start[i]);                                              
    printf("\n");                                                               
}  

int main()
{
    short sx = -12345; /* -12345 */
    unsigned short usx = sx; /* 53191 */
    int x = sx; /* -12345 */
    unsigned ux = usx; /* 53191 */
    
    printf("zero and sign extension in casts\n\n");
    printf("short          x = %d:\t", sx);
    show_bytes((byte_pointer) &sx, sizeof(short));
    printf("int            x = %d:\t", x);
    show_bytes((byte_pointer) &x, sizeof(int));

    printf("\n");

    printf("unsigned short x =  %u:\t", usx);
    show_bytes((byte_pointer) &usx, sizeof(unsigned short));
    printf("unsigned int   x =  %u:\t", ux);
    show_bytes((byte_pointer) &ux, sizeof(unsigned));

    return 0;
}
