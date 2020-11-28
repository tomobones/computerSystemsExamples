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


typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);
void show_int(int x);
void show_float(float x);
void show_pointer(void* x);
void test_show_bytes(int val);
