#include"test.h"

int bir_num(int num) {
    int count = 0;
    for (int i = 0; i < 32; i++) {
        if ((num>>i & 1) == 1) {
            count++;
        }
    }
    return count;
}