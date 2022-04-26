#include <stdio.h>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

void call(int i, int x);
bool is_include(int ans);

int main() {
    int i, n;
    scanf("%d", &n);
    i = n;

    if (n % 3 != 0) n -= n % 3;
    call(i, n);
    printf("\n");
    return 0;
}

void call(int i, int x) {
    int ans;
    if (x < 0) return;
    else {
        ans = int(fabs(double(x - i)));
        if (ans != 0 && (ans % 3 == 0 || ans % 10 == 3 || is_include(ans))) {
            printf(" %d", ans);
        }
        x--;
        return call(i, x);
    }
}

bool is_include(int ans) {
    std::ostringstream ostr;
    ostr << ans;
    string s = ostr.str();
    if (s.find("3") != string::npos) return true;
    return false;
}
