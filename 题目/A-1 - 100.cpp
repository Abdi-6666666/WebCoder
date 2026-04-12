#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct stuff {
    long long num, prize;
};

int main() {
    long long n;
    if (!(cin >> n)) return 0;
    vector<stuff> a(3);
    for (int i = 0; i < 3; i++) {
        cin >> a[i].num >> a[i].prize;
    }
    long long ans = (1LL<<62);
    for (int i = 0; i < 3; i++) {
        long long num = a[i].num;
        long long prize = a[i].prize;
        long long packs = (n + num - 1) / num; 
        __int128 total = (__int128)packs * (__int128)prize;
        if (total < ans) ans = (long long)total;
    }
    cout << ans << "\n";
    return 0;
}