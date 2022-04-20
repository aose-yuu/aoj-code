#include <iostream>
using namespace std;

void swap_num(int* x, int* y);

int main() {
    int a, b, c, t;

    cin >> a >> b >> c;

    if (a > b) {
        swap_num(&a, &b);
    }

    if (b > c) {
        swap_num(&b, &c);
    }

    if (a > b) {
        swap_num(&a, &b);
    }

    cout << a << " " << b << " " << c << endl;
    return 0;
}

void swap_num(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}
