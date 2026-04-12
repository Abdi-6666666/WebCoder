#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    long long cur = a;
    long long steps = 0;
    while (cur < b) {
        if (cur + 2 <= b && ( (cur + 2) % c != 0 )) {
            cur += 2;
            ++steps;
            continue;
        }
        if (cur + 1 <= b && ( (cur + 1) % c != 0 )) {
            cur += 1;
            ++steps;
            continue;
        }
        bool progressed = false;
        if (cur + 1 <= b && (cur + 1) % c != 0) {
            cur += 1;
            ++steps;
            progressed = true;
        } else if (cur + 2 <= b && (cur + 2) % c != 0) {
            cur += 2;
            ++steps;
            progressed = true;
        } else {
            long long target = cur + 1;
            while (target <= b && target % c == 0) ++target;
            if (target > b) {
                break;
            }
            long long dist = target - cur;
            long long addSteps = dist / 2 + dist % 2;
            steps += addSteps;
            cur = target;
            progressed = true;
        }
        if (!progressed) break;
    }
    cout << steps << '\n';
    return 0;
}