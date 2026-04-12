#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, S;
    if (!(cin >> N >> S)) return 0;
    vector<int> q(N+1), v(N+1);
    for (int i = 1; i <= N; ++i) {
        cin >> q[i] >> v[i];
    }

    vector<char> destroyed(N+1, 0);
    int p = S;
    long long k = 1; 
    int d = 1; 
    int destroyedCount = 0;

    if (q[p] == 1 && !destroyed[p] && k >= v[p]) {
        destroyed[p] = 1;
        ++destroyedCount;
    }
    if (q[p] == 0) {
        k += v[p];
        d = -d;
    }

    unordered_map<string, int> seen;
    auto keyFor = [&](int pp, long long kk, int dd) {
        return to_string(pp) + "#" + to_string(kk) + "#" + to_string(dd);
    };
    seen[keyFor(p,k,d)] = destroyedCount;

    while (true) {
        long long nextP = (long long)p + (long long)d * k;
        if (nextP < 1 || nextP > N) break;
        p = (int)nextP;

        if (q[p] == 0) {
            k += v[p];
            d = -d;
        } else { 
            if (!destroyed[p] && k >= v[p]) {
                destroyed[p] = 1;
                ++destroyedCount;
            }
        }

        string key = keyFor(p,k,d);
        auto it = seen.find(key);
        if (it != seen.end()) {
            if (it->second == destroyedCount) {
                break;
            } else {
                it->second = destroyedCount;
            }
        } else {
            seen.emplace(move(key), destroyedCount);
        }
    }

    cout << destroyedCount << "\n";
    return 0;
}