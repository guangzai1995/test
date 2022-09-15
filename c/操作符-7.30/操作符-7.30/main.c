#include"test.h"


int main() {
    int a = 0;
    scanf("%d", &a);
    int b = a;
    long sn = 0;
    for (int i = 0; i < 5; i++) {
        sn += a;
        a *= 10;
        a+=b;
    }
    printf("%ld\n", sn);
    return 0;
}
