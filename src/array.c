#include "array.h"

int singlenum(int array[], int len) {
    int result = 0;
    for (int i = 0; i < len; i += 1) {
        result ^= *(array + i);
    }

    return result;
}
