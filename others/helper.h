#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct DATA{
    int nums[2];
    int is_real;
    unsigned char *buffer;
    int position;
    int is_hex;
    unsigned int hex_num;
} EXT;

extern EXT extra;
void nice_outp(char *,char *);
void assign(char*, int);
