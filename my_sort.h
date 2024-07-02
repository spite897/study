#pragma once
#include <string.h>
void my_bsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*));

void my_csort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*));