#include <stdio.h>

int main() {
    double r, pi, circle_area, circle_length = 0;
    scanf("%lf", &r);
    pi = 3.141592653589;
    circle_area = r * r * pi;
    circle_length = r * double(2) * pi;

    printf("%lf %lf\n", circle_area, circle_length);
    return 0;
}
