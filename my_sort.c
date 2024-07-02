#include "my_sort.h"

void swap(void* e1 , void* e2 , size_t size) {
	int i = 0 , n =0;
	for (i = 0; i < size; i++) {
		n = *((char*)e1 + i);
		*((char*)e1 + i) = *((char*)e2 + i );
		*((char*)e2 + i) = n;

	}
}
void my_bsort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*)) {
	int i = 0 , j = 0 ,n = 0;
	for (i = 0; i < nitems-1; i++) {
		for (j = 0; j < nitems-i-1; j++) {
			if ((compar((char*)base + (j) * size, (char*)base + (j + 1) * size)) < 0) {
				swap((char*)base + (j) * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

void my_csort(void* base, size_t nitems, size_t size, int (*compar)(const void*, const void*)) {
	char* max = 0, i = 0, j = 0;
	for (i = 0 ; i < nitems - 1; i++) {
		max = (char*)base;
		for (j = 0; j < nitems - i; j++) {
			if ((compar((char*)base + (j)*size, max ) < 0)) {
				max = (char*)base + (j)*size;
			}
		}
		swap(max, (char*)base + (nitems - i - 1) * size , size);
	}
}