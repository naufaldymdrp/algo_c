#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "str/str_algo.h" // fn str_str

// puts()

int str_str(const char *haystack, const char *needle) {
    // get the length of both haystack and needle
    const size_t haystack_len = strlen(haystack);
    const size_t needle_len = strlen(needle);

    // if either haystack or needle has the length of zero, then just returns
    // -1
    if (haystack_len == 0 || needle_len == 0) {
        return ERROR_NOT_FOUND;
    }

    if (haystack_len < needle_len) {
        return ERROR_NOT_FOUND;
    }

    return 0;
}
