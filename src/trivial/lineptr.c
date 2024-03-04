#include <string.h>
#include <stdio.h>
#include "trivial/lineptr.h" // get_lineptr

struct PtrLoc get_lineptr(char string[]) {
    struct PtrLoc result = (struct PtrLoc){ .row = 0, .col = 0 };
    return result;
}

int stridx(const char* haystack, const char* needle) {
    // int newline_ctr = 0;
    // int row, col = 0;

    int haystack_len = strlen(haystack);
    int needle_len = strlen(needle);
    printf("Haystack lenght: %d, Needle length: %d\n", haystack_len, needle_len);

    if (haystack_len == 0) return -1;
    else if (haystack_len < needle_len) return -1;

    printf("Continuing to normal searching operation\n");

    int res = -1;
    // String search only begin searching operation when current haystack pointer 
    // matches needle's first character
    for (int i = 0; i <=haystack_len - needle_len; i++) { // haystack counter
        if (*(haystack + i) == *needle) {
            printf("First letter match\n");
            for (int j = i; j < (i + needle_len); j++) { // haystack's word counter
                for (int jj = 0; jj < needle_len; jj++) { // needle's counter
                    printf("Current: %c, Target: %c\n", *(haystack + j), *(needle + jj));
                    if (*(haystack + j) != *(needle + jj)) {
                        break;
                    }
                }
            }
        }
        else {
            printf("Not found anything in first world => i : %d\n", i);
        }

        res = i;
    }

    return res;
}
