#include <assert.h>
#include <stdio.h>
#include "trivial/lineptr.h"

void print_result(const int res) {
    printf("Actual idx: %d\n", res);
}

int main(int argc, char** argv) {
    const char* test1_haystack = "hello world\n";
    // --
    const char* test1_needle_1 = "hello";
    int result1_1 = stridx(test1_haystack, test1_needle_1);
    print_result(result1_1);
    assert(result1_1 == 0);
    // --
    const char* test1_needle_2 = "ello";
    int result1_2 = stridx(test1_haystack, test1_needle_2);
    print_result(result1_2);
    assert(result1_2 == 1);
    // // --
    const char* test1_needle_3 = "world";
    int result1_3 = stridx(test1_haystack, test1_needle_3);
    print_result(result1_3);
    assert(result1_3 == 6);

    return 0;
}
