#include <stdio.h>

int main() {
    int a, b, d, r = 0;
    double f;

    scanf("%d %d", &a, &b);

    d = a / b;
    r = a % b;
    f = double(a) / double(b);

    printf("%d ", d);
    printf("%d ", r);
    printf("%f\n", f);
    return 0;
}
