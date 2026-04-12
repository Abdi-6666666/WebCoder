#include <iostream>
using namespace std;

bool is_super(long long x) {
    while (x % 10 == 0 && x > 0) x /= 10;
    return x > 0 && x < 10;
}

int main() {
    long long q;
    cin >> q;
    while (q--) {
        long long n;
        cin >> n;
        is_super(n) ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}