#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int> > vc_1(n, vector<int>(m));
    vector<int> vc_2(m);
    vector<int> vc_3(n);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int t;
            cin >> t;
            vc_1.at(i).at(j) = t;
        }
    }

    for (int i = 0; i < m; ++i) {
        int t;
        cin >> t;
        vc_2.at(i) = t;
    }

    for (int i = 0; i < n; ++i) {
        int total;
        for (int j = 0; j < m; ++j) {
            int t_1, t_2;
            t_1 = vc_1.at(i).at(j);
            t_2 = vc_2.at(j);
            total += t_1 * t_2;
        }
        vc_3.at(i) = total;
        total = 0;
    }

    for (int i = 0; i < n; ++i) {
        cout << vc_3.at(i) << endl;
    }
    return 0;
}
