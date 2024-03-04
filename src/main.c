#include <stdio.h>
#include "str/str_algo.h"
#include "trivial/lineptr.h" // get_lineptr

int main() {
    char multiline[] = 
        "Garis satu\n"
        "Garis kedua.";
    struct PtrLoc location = get_lineptr(multiline);
    printf("Line: %d, Col: %d\n", location.row, location.col);

    return 0;
}
