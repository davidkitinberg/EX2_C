#include "SubArraySize.h"

size_t subarraySize(void *start, void *end)
{
    // Calculate the number of elements between the two pointers
    return ((char *)end - (char *)start) / sizeof(int);
}