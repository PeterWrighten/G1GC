#include<stdlib.h>
#define SMALL_REQUEST_THRESHOLD 256


void *PyObject_Malloc(size_t nbytes) {
    block *bp;
    poolp pool;
    poolp next;
    unit size;

    /* Exception */

    if((nbytes - 1) < SMALL_REQUEST_THRESHOLD) {
        /* < 256 Bytes' Memory Allocation */
    }

    /* > 256 Bytes's Memory Allocation */

    return (void *)malloc(nbytes);
}