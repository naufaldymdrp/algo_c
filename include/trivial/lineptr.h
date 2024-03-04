#ifndef LINEPTR_H
#define LINEPTR_H

typedef struct PtrLoc {
    unsigned int row;
    unsigned int col;
} PtrLoc;

struct PtrLoc get_lineptr(char string[]);

int stridx(const char* haystack, const char* needle);

#endif
