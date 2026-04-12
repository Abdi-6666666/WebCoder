#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    if (a >= b) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    while (a < b) {
        if ((a + 2) % c != 0) {
            a += 2;
        } else {
            if ((a + 1) % c != 0) {
                a += 1;
            } else {
                if ((a + 2) % c != 0) {
                    a += 2;
                } else {
                    cout << -1 << endl;
                    return 0;
                }
            }
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}