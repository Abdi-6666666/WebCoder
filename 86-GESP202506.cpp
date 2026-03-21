#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n, q;
    cin >> n >> q;
    int a[10005];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < q; ++i) {
        int max_gcd = 0;
        int b[10005];
        for (int j = 0; j < n; ++j)
            b[i] = a[i];
        for (int j = 0; j < n; ++j) {
            b[j] = a[j] + i;
        }
        max_gcd = __gcd(b[0], b[1]);
        for (int j = 1; j < n - 1; ++j) {
            max_gcd = __gcd(max_gcd, b[i]);
        }
        cout << max_gcd;
        cout << endl;
    }
    return 0;
}