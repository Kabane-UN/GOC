#include <stdio.h>
#include <stdlib.h>

int mul(int a, int b) {
    return a * b;
}

struct test
{
    int n;
};

int main() {
    struct test g;
    g.n = 10;
    int *arr = NULL;
    arr = (int*)malloc(g.n);
    int a = 5;
    int b = 1;
    int c = 6;

    if (a > 0) {
        a += b;
    } else {
        a -= c;
    }
    printf("%d, %d, mul:%d", a, b, mul(a,b));
    arr[0] = mul(a,b);
    int z = arr[0];
    printf("%d", z);
    free(arr);
    return 0;
}
