#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    for (int i = 1; ; i++) {
        int x;
        cin >> x;
        if (x == 0) break;
        printf("Case %d: %d\n", i, x);
    }
    return 0;
}
