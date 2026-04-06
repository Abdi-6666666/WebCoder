#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; ++i) {
        int b;
        cin >> b;
        arr.push_back(b);
    }
    int m;
    cin >> m;
    int ans;
    for (int i = 0; i < n; ++i) {
        if(arr[i] == m)
            ans = i;
    }
    cout << ans + 1 << endl;
    return 0;
}