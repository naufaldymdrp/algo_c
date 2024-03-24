#include <stdio.h>
#include "str/str_algo.h"
#include "trivial/lineptr.h" // get_lineptr
#include "array.h"

int main() {
    char multiline[] = 
        "Garis satu\n"
        "Garis kedua.";
    struct PtrLoc location = get_lineptr(multiline);
    printf("Line: %d, Col: %d\n", location.row, location.col);

    int list1[] = {1, 1, 5, 2, 2 }; int len1 = 5;
    int result1 = singlenum(list1, len1);
    printf("The result is %d\n", result1);

    return 0;
}
