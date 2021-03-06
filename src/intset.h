#ifndef INTSET_H_FW2SWPAB
#define INTSET_H_FW2SWPAB

#include <stdbool.h>
#include <sys/types.h>

typedef struct {
    int* ints;
    size_t size;
    size_t capacity;
} intset_t ;

intset_t* create_intset();
void destroy_intset(intset_t*);
void add_to_intset(intset_t*, int);
bool remove_from_intset(intset_t*, int);
bool intset_contains(intset_t*, int);
size_t intset_size(intset_t* set);
int intset_get(intset_t* set, ssize_t i);

#endif /* end of include guard: INTSET_H_FW2SWPAB */
