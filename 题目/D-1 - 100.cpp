#include <iostream>
#include <list>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, q;
    cin >> N >> q;
    list<int> nums;
    for (int i = 1; i <= N; ++i) {
        nums.push_back(i);
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        auto it_l = nums.begin();
        for (int i = 1; i < l; ++i) {
            ++it_l;
        }
        auto it_r = it_l;
        for (int i = l; i < r; ++i) {
            ++it_r;
        }
        auto it_after_r = next(it_r);
        list<int> cut;
        cut.splice(cut.begin(), nums, it_l, it_after_r);

        auto it_insert = nums.begin();
        if (k > 0) { 
            for (int i = 1; i < k; ++i) {
                ++it_insert;
            }
            ++it_insert; 
        }

        nums.splice(it_insert, cut);
    }
    auto it = nums.begin();
    for (int i = 0; i < 10; ++i) {
        cout << *it << '\n';
        ++it;
    }

    return 0;
}