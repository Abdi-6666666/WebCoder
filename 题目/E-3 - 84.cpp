#include <bits/stdc++.h>
using namespace std;

long long steps_in_safe_segment(long long x, long long y) {
    long long d = y - x;
    return d / 2 + d % 2;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    long long steps = 0;
    long long k0 = a / c;
    long long first_forbidden = (k0 + 1) * c;
    long long cur = a;

    for (long long f = first_forbidden; f < b; f += c) {
        long long right = f - 1;
        if (right >= cur) {
            steps += steps_in_safe_segment(cur, right);
            cur = right;
        }
        long long target = f + 1;
        if (target > b) target = b;
        long long dist = target - cur;
        long long add = dist / 2 + dist % 2;
        steps += add;
        cur = target;
        if (cur >= b) break;
    }

    if (cur < b) {
        steps += steps_in_safe_segment(cur, b);
    }

    cout << steps << '\n';
    return 0;
}