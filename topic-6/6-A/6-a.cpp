#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v.at(i);
    }

    for (int i = n - 1; i >= 0; --i) {
        if (i != 0) printf("%d ", v.at(i));
        else {
            printf("%d\n", v.at(i));
        }
    }
    return 0;
}
