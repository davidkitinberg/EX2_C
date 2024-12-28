
#include <stdio.h>
#include "subArrSize.h"


size_t calculateSubarraySize(void *ptr1, void *ptr2, size_t elementSize) {
// we want to calculate the difference in bytes and divide by the element size
    return (size_t)((char *)ptr2 - (char *)ptr1) / elementSize;

}