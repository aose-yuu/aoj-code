#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    for (int i = 0; ; i++) {
        int x, y, t;
        cin >> x >> y;

        if (x == 0 && y == 0) break;

        if (x > y) {
            t = x;
            x = y;
            y = t;
        }

        printf("%d %d\n", x, y);
    }
    return 0;
}
